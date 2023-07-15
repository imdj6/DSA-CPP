#include <bits/stdc++.h>
using namespace std;
bool searchinrotated(vector<int> &arr,int k){
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]==k)
        {
           return true;
        }
    }
    return false;
}
bool searchInrotatedarray2(vector<int> &arr,int k){
    int n=arr.size();
    int low=0,high=n-1;
    int mid=low+(high-low)/2;
    while (low<=high)
    {
        if(arr[mid]==k) return true;
    }
    
}
int main()
{
    vector<int> arr = {7, 8, 1, 2, 3,3, 3, 4, 5, 6};
    int k = 3;
    bool ans = searchinrotated(arr,k);
    if (!ans)
    {
        cout << "Target cannot be found in the array" << endl;
    }
    else
    {
        cout << "Target is found in the array";
    }

    return 0;
}