// checkPalindrome

#include <iostream>
#include <stdio.h>

using namespace std;	
    
int main()
{
    string inputString;
    cout << "Please input a sentence : ";
    cin >> inputString;

    int total_length = inputString.length();
    int checkPalin = 0;

    if(total_length == 1){
        cout << "It's Palindrome";
    }else{
        for(int i=0; i<(total_length/2); i++){
            if(inputString[i] == inputString[total_length - i -1]){
                checkPalin++;
                if(checkPalin == (total_length/2)){
                    cout << "It's Palindrome";
                }
            }
            else{
                cout << "Not Palindrome";
                break;
            }
        }
    }

    return 0;
}