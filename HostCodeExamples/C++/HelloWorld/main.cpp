#include <iostream>
#include "HWABRO.h"

int main(void){
    TickData data;
    reset(&data);
    tick(&data); // init tick
    char input;
    while(true){
        // Update Inputs
        bool update = true;
        while(update){
            std::cout << "Enter either 'A' or 'B or 'R' or 'd' for done: ";
            std::cin >> input;
        
            if(input == 'A'){
                data.A = 1;
            } else if (input == 'B'){
                data.B = 1;
            } else if (input == 'R'){
                data.R = 1;
            } else if (input == 'd'){
                update = false;
            }
        }       
        // Tick 
        tick(&data);

    }

    return 0;
}