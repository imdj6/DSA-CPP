#include <iostream>
using namespace std;
//this is the optmial approach tc->O(n) and sc->O(1);
bool ifsorted(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        if(arr[i-1]>arr[i]){
            return false;
        }
    }
    return true;
    
}
int main()
{
    int n=8;
    // cin>>n;
    int arr[n]={1,2,3,4,5,6,7,8};
    int arr1[n]={2,1,4,5,6,4,7,9};
    cout<<ifsorted(arr1,n);

    return 0;
}