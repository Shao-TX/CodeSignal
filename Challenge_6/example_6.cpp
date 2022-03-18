// Make Array Consecutive 2

#include <iostream>
#include <vector>
#include <algorithm>

int solution(std::vector<int> statues)
{
    int min_num, max_num, all_array_len;
    std::vector<int> complete_statues;

    max_num = *std::max_element(statues.begin(), statues.end());
    min_num = *std::min_element(statues.begin(), statues.end());

    all_array_len = max_num - min_num + 1;

    return all_array_len - statues.size();
}

int main()
{
    int output, array_len, array_value;
    std::vector<int> input;

    std::cout << "How long the array you want to input(1 <= length <= 10) : ";
    std::cin >> array_len;

    for(int i = 0; i < array_len; i++)
    {
        std::cout << "Please input " << i + 1 << " position of array : ";
        std::cin >> array_value;

        input.push_back(array_value);
    }

    output = solution(input);
    std::cout << "\nThe minimum number of additional statues needed is " << output;

    return 0;
}