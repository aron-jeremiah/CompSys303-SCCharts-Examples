#include <gtest/gtest.h>
#include <ABRO.h>

TEST(TestAB, ABRO){
    TickData data;
    reset(&data);
    tick(&data);    // init tick
    
    EXPECT_EQ(data.O, 0);
    
    data.A = 1;
    data.B = 1;

    tick(&data);

    EXPECT_EQ(data.O, 1);
}

TEST(TestAR, ABRO){
    TickData data;
    reset(&data);
    tick(&data);    // init tick
    
    
    data.A = 1;
    data.R = 1;     // Keep in mind that I modified the ABRO.cpp file to reset my inputs at the end of the "tick" method

    tick(&data);

    EXPECT_EQ(data.O, 0);

    data.B = 1;
    tick(&data);
    EXPECT_EQ(data.O, 0);
}

TEST(TestBR, ABRO){
    TickData data;
    reset(&data);
    tick(&data);    // init tick
    
    
    data.B = 1;
    data.R = 1;     // Keep in mind that I modified the ABRO.cpp file to reset my inputs at the end of the "tick" method

    tick(&data);

    EXPECT_EQ(data.O, 0);

    data.A = 1;
    tick(&data);
    EXPECT_EQ(data.O, 0);
}

TEST(TestABRO, ABRO){
    TickData data;
    reset(&data);
    tick(&data);

    data.A = 1;
    data.B = 1;
    data.R = 1;

    tick(&data);
    EXPECT_EQ(data.O, 1);
}

