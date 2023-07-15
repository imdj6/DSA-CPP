//search insert position also have same answer
//also to find ceil and floor value has similar answer
#include <bits/stdc++.h>
using namespace std;
//this is brute force -> tc->O(N) and sc->O(1);
int lowerbound(vector<int> arr, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            return i;
        }
    }
    return n;
}
//we will use binary search to optimise the tc to ->O(logn) and sc=>O(1)
int lowerbound1(vector<int> arr,int n,int x){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while (s<=e)
    {
        if(arr[mid]>=x){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    vector<int> arr = {3, 5, 8, 14, 19};
    int n = arr.size(), x = 9;
    int index = lowerbound1(arr, n, x);

    cout << "The index for Lower bound is: " << index << endl;

    return 0;
}