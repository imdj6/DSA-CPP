#include <iostream>
using namespace std;
//the timecomplexity of this sorting is:O(N^2);
//space complexity is:O(1)
//best timecomplexity is::O(N)
void bubbleSort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        for (int j = 0; j < i; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"After Sorting::"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int n=6;
    int arr[n]={13,46,24,52,20,9};

    bubbleSort(arr,n);


    return 0;
}