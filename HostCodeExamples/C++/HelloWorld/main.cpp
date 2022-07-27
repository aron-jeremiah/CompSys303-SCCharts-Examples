#include <iostream>
#include <cstring>
#include "HWABRO.h"

int main(void){
    TickData data;
    reset(&data);
    tick(&data); // init tick
    char input[4];
    while(true){
        // Update Inputs
        bool update = true;
        while(update){
            std::cout << "Enter either 'A' or 'B or 'R' or 'd' for done: ";
            std::cin >> input;
            std::cout << std::endl;
        
            if(*input == 'A'){
                data.A = 1;
            } else if (*input == 'B'){
                data.B = 1;
            } else if (*input == 'R'){
                data.R = 1;
            } else if (*input == 'd'){
                update = false;
            } else if(*input == 'T') {
                int exit = 0;
                while(!exit){
                    char temp[100];
                    std::cout << "Enter Time passed since previous tick (ms) or press 'S' to skip: ";
                    std::cin >> temp;
                    // check of input is not a number
                    if(*temp == 'S'){
                        exit = 1;
                    } else {
                        try
                        {
                            int time = std::stoi(temp);
                            exit = 1;
                        }
                        catch(const std::exception& e)
                        {

                            std::cout << "ERROR - Invalid input \nPlease Enter a Number" << std::endl;
                        }
                        
                    }
                }


            } else if (strcmp(input, "exit") == 0){
                exit(EXIT_SUCCESS);
            } 
        // Tick 
        tick(&data);
        }
    }

    return 0;
}