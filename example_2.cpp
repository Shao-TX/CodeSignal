// centuryFromYear

#include <iostream>

int centuryFromYear(int year)
{
    int remainder = year % 100;

    if(remainder != 0)
    {
        return (year/100) + 1;
    }
    else
    {
        return (year/100);
    }
}


int main()
{
    int year, century;

    std::cout << "Please input a year : ";
    std::cin >> year;

    century = centuryFromYear(year);        

    std::cout << "Century of year you input is " << century;
}