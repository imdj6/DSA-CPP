#include <iostream>
using namespace std;
int linearsearch(int arr[],int n,int target){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==target)
        {
            return i;
        }
    }
    
    return -1;
}
int main()
{
   int n=8; 
   int arr[n]={1,2,3,4,5,6,7,8};
   int target=7;
   cout<<linearsearch(arr,n,target);

    return 0;
}