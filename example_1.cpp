#include <iostream>

int add(short int param1, short int param2)
{
    return param1 + param2;
}

int main()
{
    short int input_1, input_2, sum;
    
    std::cout << "Please input first number : ";
    std::cin >> input_1;

    std::cout << "Please input second number : ";
    std::cin >> input_2;

    sum = add(input_1, input_2);
    std::cout << "\nSum is " << sum;

    return 0;
}