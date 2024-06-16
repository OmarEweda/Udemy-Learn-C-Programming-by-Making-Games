/*Problem 3: Write a program that takes in a number of seconds and outputs the time in this format: 
hh::mm::ss where hh is the hours, mm is the minutes, and ss is the seconds.*/

#include <iostream>

#define MINUTE 60
#define HOUR (60*MINUTE)

int main()
{   
    int input, hours, minutes ,seconds;
    std::cout << "Please enter number of seconds: " << std::endl;
    std::cin >> input;

    hours = input / HOUR;

    if(hours){
        seconds = input - hours * HOUR ;
    }
    else{
        seconds = input;
    }

    minutes = seconds / MINUTE;
    
    if(minutes){
        seconds = seconds - minutes * MINUTE;
    }

    std::cout <<"hh::"<< hours <<" mm::"<< minutes <<" ss::"<< seconds << std::endl;

    return 0;
}