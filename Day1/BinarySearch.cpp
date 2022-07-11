/*
Given a sorted array of size N and an integer K, find the position at which K is present in the array using binary search.
ex:Input:
N = 5
arr[] = {1 2 3 4 5} 
K = 4
Output: 3
Explanation: 4 appears at index 3.
*/
#include <iostream>
using namespace std;
int main()
{
   int binarysearch(int arr[], int n, int k) {
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        while(s<=e)
        {
            if(arr[mid]==k)
            {
                return mid;
            }
            else if(arr[mid]>k)
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return -1;
    }



    return 0;
}