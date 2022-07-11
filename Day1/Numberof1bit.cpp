/*
Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).

ex:Input: n = 00000000000000000000000000001011
Output: 3
Explanation: The input binary string 00000000000000000000000000001011 has a total of three '1' bits.

Input: n = 00000000000000000000000010000000
Output: 1
Explanation: The input binary string 00000000000000000000000010000000 has a total of one '1' bit.
*/
#include <iostream>
using namespace std;

int main()
{

     int hammingWeight(uint32_t n) {
    
        int count=0;
        while(n!=0)
        {
            //checking last bit
            if(n&1==1)
            {
                count++;
            }
            n=n>>1;
        }
        return count;
        
    }

    return 0;
}
