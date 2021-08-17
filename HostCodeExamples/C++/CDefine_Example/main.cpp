#include "SCChart.h"
#include <iostream>

int main(void){
    TickData data;
    reset(&data);
    tick(&data); // initial tick

    data.deltaT = 10; 
    while(data.sleepT != 1000){
        std::cout << "tick" << std::endl;
        tick(&data);
        if(data.n_pace){
            std::cout << "Not Pacing" << std::endl;
        }
        if(data.pace){
            std::cout << "Pacing" << std::endl;
        }
    }
    return 0;
}