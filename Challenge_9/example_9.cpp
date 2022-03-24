#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> solution(std::vector<std::string> input_array)
{
    int max_num = 0;
    std::vector<std::string> output_array;

    for(int i = 0; i < input_array.size(); i++)
    {
        if(max_num < input_array[i].size()) max_num = input_array[i].size();
    }

    for(int j = 0; j < input_array.size(); j++)
    {
        if(input_array[j].size() == max_num) output_array.push_back(input_array[j]);
    }

    return output_array;
}

int main()
{
    int array_len;
    std::string array_value;
    std::vector<std::string> input_array, output_array;

    std::cout << "Please input the length of array : ";
    std::cin >> array_len;

    for(int i = 0; i < array_len; i++)
    {
        std::cout << "Please input position " << i + 1 << " of array : ";
        std::cin >> array_value;

        input_array.push_back(array_value);
    }

    output_array = solution(input_array);

    for(int j = 0; j < output_array.size(); j++)
    {   
        if(j == 0) std::cout << "\nAnswer is [";
        std::cout << output_array[j] << ", ";

        if(j == (output_array.size()-1)) std::cout << "]";
    }

    return 0;
}