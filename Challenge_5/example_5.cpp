// shapeArea

#include <iostream>

int shapeArea(int n)
{
    return (n * n) + ((n - 1) * (n - 1));
}

int main()
{
    int input, output;

    std::cout << "Please input a number(1 <= n < 10^4) : ";
    std::cin >> input;

    output = shapeArea(input);

    std::cout << "The shapeArea of the number you input is " << output;

    return 0;
}