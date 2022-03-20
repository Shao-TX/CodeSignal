#include <iostream>
#include <vector>
#include <numeric>

int solution(std::vector<std::vector<int>> matrix)
{
    int sum = 0;
    int cnt = 0;

    for(int i = 0; i < matrix.size() - 1; i++) // It doesn't need to check the lastest row
    {
        for(int j = 0; j < matrix[i].size(); j++)
        {
            if(matrix[i][j] == 0)
            {
                for(int k = i; k < matrix.size(); k++)
                {
                    matrix[k][j] = 0; // Make value to 0 which is below ghost
                }
            }
        }
    }

    while(cnt < matrix.size())
    {
        sum += std::accumulate(matrix[cnt].begin(), matrix[cnt].end(), 0);
        cnt++;
    }

    return sum;
}

int main()
{
    int row_len, column_len, array_value, output;
    std::vector<std::vector<int>> input;

    std::cout << "Input the array row length : ";
    std::cin >> row_len;

    std::cout << "Input the array column length : ";
    std::cin >> column_len;


    for(int i = 0; i < row_len; i++)
    {
        input.push_back(std::vector<int> ());
        
        for(int j = 0; j < column_len; j++)
        {
            std::cout << "Please input position of array " << "[" << i << "," << j << "] : " ;
            std::cin >> array_value;

            input[i].push_back(array_value);
        }
    }
    output = solution(input);

    std::cout << "Answer is " << output;

    return 0;
}