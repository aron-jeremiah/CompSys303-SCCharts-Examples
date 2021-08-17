#include <gtest/gtest.h>
#include <SCChart.h>

TEST(ExampleTestA, Timing){
    TickData data;
    reset(&data);
    tick(&data);
    data.deltaT = 0;

    tick(&data);
    EXPECT_EQ(data.c, 0);       // 0 time passed
    EXPECT_EQ(data.pace, 0);    // Pace should not be outputed

    data.deltaT = data.sleepT;
    tick(&data);
    EXPECT_EQ(data.c, AVI);     // Here, deltaT == sleepT == AVI
    EXPECT_EQ(data.pace, 1); 

    tick(&data);
    EXPECT_EQ(data.c, AVI * 2); // data.deltaT not reset thus it is equal to (2 x AVI)
    EXPECT_EQ(data.pace, 0);    // Pace should be reset as it is signal
}

TEST(ExampleTestB1, Timing){
    /**
     * In this case I want to enure that 
     * if pace is given, then n_pace is absent
    */

   TickData data;
   reset(&data);
   tick(&data); // init tick
   data.deltaT = 10;
   
   while(data.c < AVI){
      tick(&data);
      EXPECT_NE(data.pace, data.n_pace) << "Clock Value: " << data.c; 
      /**
       * Note that the above test case will fail on purpose.
       * This is as when the transition is taken, since we are 
       * using 'during' and 'entry', on the tick the transition is 
       * taken, both 'pace' and 'n_pace' will be active.
       * 
       * Note that by using the "<<", we can show other variables
       * when the test fails. This can be helpful with extra debugging. 
      */
   }
}

TEST(ExampleTestB2, Timing){

    /**
     * In this case I want to enure that 
     * if pace is given, then n_pace is absent
    */

    TickData data;
    reset(&data);
    tick(&data); // init tick
    data.deltaT = 10;
   
    while(data.c < AVI - 10){
        /* Using AVI + 10 to enure that I test past the transition condition
         * 10 is a random number
        */
        tick(&data);
        EXPECT_NE(data.pace, data.n_pace); 
        /**
         * Note that the above test case now passes by 
         * avoiding making the transition
        */
        EXPECT_LT(data.c, AVI);
    }
    EXPECT_EQ(data.c, AVI-10);
}
