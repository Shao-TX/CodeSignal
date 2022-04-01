#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int> input)
{
    std::vector<int> tree_pos;
    std::vector<int> output;

    for(int i = 0; i < input.size(); i++)
    {
        if(input[i] == -1)
        {
            tree_pos.push_back(i);
        }
        else
        {
            output.push_back(input[i]);
        }
    }

    std::sort(output.begin(), output.end());

    for(auto &it : tree_pos)
    {
        output.insert(output.begin()+it, -1);
    }

    return output;
}

int main()
{
    int array_len, array_value;
    std::vector<int> input_array, output_array;

    std::cout << "Please input the length of array : ";
    std::cin >> array_len;

    for(int i = 0; i < array_len; i++)
    {
        std::cout << "Please input position " << i + 1 << " of array : ";
        std::cin >> array_value;

        input_array.push_back(array_value);
    }

    output_array = solution(input_array);

    for(auto &it : output_array)
    {
        std::cout << it << ',';
    }

    return 0;
}