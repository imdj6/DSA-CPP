#include <bits/stdc++.h>
using namespace std;
// using linear search it takes O(N) and sc=> O(1)
int upperbound(vector<int> arr, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            return i;
        }
    }
    return n;
}
//we will use binary search which take O(logn)
int upperbound1(vector<int> arr,int n,int x){
    int s=0,e=n-1;
    int ans=n;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]>x){
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

    vector<int> arr = {3, 5, 8, 9, 15, 19};
    int n = arr.size(), x = 9;
    int index = upperbound1(arr, n, x);

    cout << "The index for Upper bound is: " << index << endl;

    return 0;
}