#include <iostream>
#include <string>
#include <algorithm>

int count_letter(char letter, std::string &str)
{
    int count = 0;

    for(char i : str)
    {
        if(i == letter) count++;
    }

    return count;
}

int solution(std::string s1, std::string s2)
{
    std::string new_s = s1 + s2;
    int all_letter_num = 0;

    /*
    先找出兩個 string 中所有字母的種類 : 
    
    aacbbd => aabbcd
    aabbcd => abcdab // 此時 it_s 指向位於位置 [4] 的 a
    abcdab => abc    // 將 [4] 到 最後刪掉
    */

    std::sort(new_s.begin(), new_s.end());
    std::string::iterator it_s = std::unique(new_s.begin(), new_s.end()); 
    new_s.erase(it_s, new_s.end());

    // 計算所有字母在兩字串中分別的數量 
    for(int j = 0; j < new_s.size(); j++)
    {
        int s1_letter_num = count_letter(new_s[j], s1);
        int s2_letter_num = count_letter(new_s[j], s2);

        std::cout << new_s[j] << " => " << "s1 : " << s1_letter_num << ", s2 : " << s2_letter_num << std::endl;

        all_letter_num += std::min(s1_letter_num, s2_letter_num);
    }

    return all_letter_num;
}

int main()
{
    std::string s1, s2;
    int output;

    std::cout << "Please input first string : ";
    std::cin >> s1;

    std::cout << "Please input second string : " ;
    std::cin >> s2;

    output = solution(s1, s2);

    std::cout << "Number of common characters is " << output;

    return 0;
}