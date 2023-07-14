#include <iostream>
using namespace std;
#include <algorithm>
// optimal solution of tc -> O(N) and sc-> O(1);
int largestelem(int arr[], int n)
{
    int large = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    return large;
}
int secondlargest(int arr[], int n)
{
    sort(arr, arr + n);
    int largest = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < largest)
        {
            return arr[i];
        }
    }
}
int secondsmallest(int arr[],int n){
    sort(arr,arr+n);
    int smallest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>smallest){
            return arr[i];
        }
    }
}
int smallest(int arr[],int n){
    int smallest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    return smallest;
}
int main()
{
    int n = 8;
    int arr[n] = {1, 4, 0, 12, 5, 6, 7, 3};
    cout << largestelem(arr, n);
    cout << endl;
    // brute force approach is:
    sort(arr, arr + n);
    // tnis approach will take tc-> O(N*logn) to sort and sc->O(1);
    cout << "the largest elem is:" << arr[n - 1];
    cout<<"the second largest elem is :"<<secondlargest(arr,n);
    cout<<"the second smallest elem is :"<<secondsmallest(arr,n);
    cout<<"the smallest elem is:"<<smallest(arr,n);
}