#include <iostream>
using namespace std;
#include <vector>
//brute force approach which will take a tc->O(N) and sc->O(N);
void solve(int arr[],int n){
    int temp[n];
    for (int i = 0; i < n-1; i++)
    {
        temp[i]=arr[i+1];
    }
    temp[n-1]=arr[0];
    for (int i = 0; i < n; i++)
    {
        cout<<temp[i]<<" ";
    }
    
}
//the optimal solution takes sc->O(1) and tc->O(N)
void solveoptimal(int arr[],int n){
    int temp=arr[0];
    for (int i = 0; i < n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    //for printing the reversed array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n=5;
    int arr[n]={1,2,3,4,5};

    solveoptimal(arr,n);


    return 0;
}