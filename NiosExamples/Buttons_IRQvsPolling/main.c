#include <system.h> // to use the symbolic names
#include <altera_avalon_pio_regs.h> // to use PIO functions
#include <alt_types.h> // alt_u32 is a kind of alt_types
#include <sys/alt_irq.h> // to register interrupts
#include<stdio.h>
float data[5]={0, 200.5, 300.5, 0, 500.5};
//int buttonValue = 0;
// first we write our interrupt function

 void button_interrupts_function(void* context, alt_u32 id)
{
	 printf("Button interrupt happened \n");
	 int* temp = (int*) context; // need to cast the context first before using it
	 (*temp) = IORD_ALTERA_AVALON_PIO_EDGE_CAP(BUTTONS_BASE);
	 // clear the edge capture register
	 IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BUTTONS_BASE, 0); // This returns the button that has changed states (ie. 0 to 1 or 1 to 0)
	 printf("button: %i\n", *temp);
	 if(*temp==1 || *temp==2 || *temp==4){
	 	  	 display(*temp);
	 	  	 printf("Data has been received ....\n");
	 }
}

//delay for 20 seconds
 void delay(){
	 usleep(200000);
 }
 void display(int index){
	 printf("The index received is %d \n", index);
	 switch(index){
	 	 case 1:
	 		 printf("The data at index %d = %f ", index, data[index]);
	 		 break;
	 	 case 2:
	 		printf("The data at index %d  = %f ", index, data[index]);
	 		break;
	 	 case 4:
	 		printf("The data at index %d, = %f ", index, data[index]);
	 		break;
	 	 default:
	 		 printf("Invalid Index .. won't print any value \n");
	 }
 }

 //Function doing dummy computation for main
  void dummy(){
	  for(int i=0; i<100000;++i){
		  printf(".");
		  delay();
	  }

  }
  void set_up_interrupt(int *val){
	  	  void *context_going_to_be_passed = (void*) val;
	  	  // clears the edge capture register
	  	  IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BUTTONS_BASE, 0);
	  	  // enable interrupts for left and right buttons i.e. button 2 and button 0
	  	  IOWR_ALTERA_AVALON_PIO_IRQ_MASK(BUTTONS_BASE, 0x5);
	  	  // register the ISR
	  	  alt_irq_register(BUTTONS_IRQ,context_going_to_be_passed,button_interrupts_function);
  }
  int main(void)
  {
	  unsigned int buttonValue = 0;
	  int choice=0;
	  printf("Enter 1 for polling and 2 for interrupt \n");
	  scanf("%d", &choice);
	  while(1){
		  switch(choice){
	  	  	  case 1:
	  	  		  printf("You entered the polling mode \n");
	  	  		  while(1){

	  	  			  buttonValue = IORD_ALTERA_AVALON_PIO_DATA(BUTTONS_BASE);
	  	  			  //Note -- a bit 1 means button not pressed, 0 means pressed
	  	  			  int right = buttonValue & 0x01;
	  	  			  int centre = buttonValue & 0x02;
	  	  			  int left = buttonValue & 0x04;
	  	  			  printf("val %d, right = %i, centre = %i, left = %i", buttonValue, right, centre, left);
	  	  			  if(right ==0){
	  	  				  printf("The right button is pressed \n");
	  	  				  display(1);
	  	  				  break;
	  	  			  }
	  	  			  if (centre==0){
	  	  				  printf("The middle button is pressed \n");
	  	  				  display(2);
	  	  				  break;
	  	  			  }
	  	  			  if (left==0){
	  	  				  printf("The left button is pressed \n");
	  	  				  display(4);
	  	  				  break;
	  	  			  }
	  	  			  if(buttonValue==7){
	  	  				  printf("No button has been pressed.. \n");
	  	  				  delay();
	  	  				  continue;
	  	  			  }
	  	  		  }
	  	  		  //display(buttonValue);
	  	  		  printf("Data has been received .. Enter your next choice \n");
	  	  		  printf("Enter 1 for polling and 2 for interrupt \n");
	  	  		  scanf("%d", &choice);
	  	  		  break;
	  	  	  case 2:
	  	  		  printf("You entered the interrupt mode \n");
	  	  		  set_up_interrupt(&buttonValue);
	  	  		  while(1){
	  	  			printf("Waiting for a button to be pressed \n");
	  	  			dummy();
	  	  		  }
	  	  	  default:
	  	  		  printf("Invalid choice entered \n");
	  	  		  printf("Enter 1 for polling and 2 for interrupt \n");
	  	  		  scanf("%d", &choice);
	  	  		  break;
		  }
	  }
      return 0;
}

