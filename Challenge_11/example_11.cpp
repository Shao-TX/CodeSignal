#include <iostream>
#include <string>
#include <cmath>

bool solution(int n)
{
    int n_len = std::to_string(n).length();
    int first_half = 0, second_half = 0;

    for(int i = (n_len-1); i >= 0; i--)
    {
        int x = (n / std::pow(10, i));
        x = x % 10;

        (i >= (n_len/2)) ? first_half += x : second_half += x;
    }

    if(first_half == second_half) return true;

    return false;
}

int main()
{   
    int input;
    bool output;

    std::cout << "Please input a integer : ";
    std::cin >> input;

    output = solution(input);

    std::cout << "Is it a Lucky Number : " << std::boolalpha << output;

    return 0;
}