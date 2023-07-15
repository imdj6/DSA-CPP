#include <iostream>
using namespace std;
//most bruteforce approach
void solve(int arr[],int n,int x){
    if (x==0)
    {
        return;
    }
    int x=x%n;
    




    //for printing our rotated array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{

    int n=5;
    int arr[n]={1,2,3,4,5};
    int x=2;

    solve(arr,n,x);

    return 0;
}