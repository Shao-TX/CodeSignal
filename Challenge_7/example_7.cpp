#include <iostream>
#include <vector>

bool solution(std::vector<int> sequence)
{
    int cnt = 0, p = -1;

    for(int i = 1; i < sequence.size(); i++)
    {
        if(sequence[i - 1] >= sequence[i]) p = i, cnt++;
    }

    if(cnt > 1) return false;
    if(cnt == 0) return true;
    
    // If comparison is in the start or end, it doesn't need to consider if forward and backward are the same
    if(p == sequence.size() - 1 || p == 1) return true;

    //  Compare if forward and backward are the same
    // EX : [1, 2, 1, 2], p = i = 2
    if(sequence[p - 1] < sequence[p + 1]) return true; // 2 and 2 are the same
    if(sequence[p - 2] < sequence[p]) return true;     // 1 and 1 are the same

    return false;
}

int main()
{
    bool output;

    int array_len, array_value;
    std::vector<int> input;

    std::cout << "Input the array length : ";
    std::cin >> array_len;

    for(int i = 0; i < array_len; i++)
    {
        std::cout << "Please input " << i + 1 << " position of array : ";
        std::cin >> array_value;

        input.push_back(array_value);
    }

    output = solution(input);

    (output == true)?std::cout << "It is a almostIncreasingSequence":std::cout <<"It is not a almostIncreasingSequence";

    return 0;
}