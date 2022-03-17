// adjacentElementsProduct

#include <iostream>
#include <vector>
#include <algorithm>

int adjacentElementsProduct(std::vector<int> inputArray)
{
    int max_num = inputArray[0] * inputArray[1];

    for(int i = 2; i < inputArray.size(); i++)
    {
        max_num = std::max(max_num, inputArray[i - 1] * inputArray[i]);
    }

    return max_num;
}

int main()
{
    int array_len, array_value;
    int output;
    std::vector<int> input;

    std::cout << "How long the array you want to input(2 ~ 10) : ";
    std::cin >> array_len;

    for(int i = 0; i < array_len; i++)
    {
        std::cout << "Please input " << i + 1 << " position of array : ";
        std::cin >> array_value;

        input.push_back(array_value);
    }

    output = adjacentElementsProduct(input);
    
    std::cout << "Max value is " << output;

    return 0;
}