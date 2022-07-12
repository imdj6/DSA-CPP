/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
ex:
Input: x = 123
Output: 321
Input: x = -123
Output: -321
*/
#include <iostream>
using namespace std;
int main()
{
     int ans=0;
        while(x!=0)
        {
            
          if((ans>INT_MAX/10) || (ans<INT_MIN/10))
          {
              return 0;
          }
            
          int digit=x%10;
          ans=ans*10+digit;  
          x=x/10;
        }
        
        
        return ans;

    return 0;
}