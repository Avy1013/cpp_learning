#include<iostream>
#include<stdio.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {

        long temp, sum=0;
        temp = x;
        while (x > 0)
        {
            int j = x % 10;
            sum = (sum * 10) + j;
            x = x / 10;
        }
        if (temp == sum)
        {
            return true;
        }
        else
            return false;
    }
};
int main(){
    Solution j;
    bool result = j.isPalindrome(1211);
    cout << result;
}