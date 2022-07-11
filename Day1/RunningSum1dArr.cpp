/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.

ex1:
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4]
*/

//solution
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> runningSum(vector<int>& nums) {
    
        for(int i=1;i<nums.size();i++)
        {
            nums[i]+=nums[i-1];
        }
        
        return nums;
    }
}

//leetcode:1480