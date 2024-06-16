/*Problem 1: Write a program to input number of days from user and convert it to years, weeks and days. Ignore leap years.*/

#include <iostream>

#define YEAR 365
#define MONTH 30

int main()
{   
    int input, years, months ,days;
    std::cout << "Please enter number of days" << std::endl;
    std::cin >> input;

    years = input / YEAR;

    if(years){
        days = input - years * YEAR ;
    }
    else{
        days = input;
    }

    months = days / MONTH;
    
    if(months){
        days = days - months * MONTH;
    }

    std::cout <<"Years: "<< years <<",Months: "<< months <<",Days: "<< days << std::endl;

    return 0;
}