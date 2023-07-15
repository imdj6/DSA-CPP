#include <iostream>
using namespace std;
// most brute force ->tc->O(N^3) and sc->O(1)
int maxsubarraysum1(int arr[], int n)
{
    int maxi = INT8_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            maxi = max(maxi, sum);
        }
    }
    return maxi;
}
// better solution ->tc->O(N^2) and sc->O(1)
int maxsubarraysum2(int arr[], int n)
{
    int maxi = INT8_MIN;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            maxi = max(maxi, sum);
        }
    }
    return maxi;
}
// most optimal solution o(N) and sc->O(1);
// kedane's algorithm for maximum subarray sum
int maxsubarraysum3(int arr[], int n)
{
    int maxi = INT8_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum > maxi)
        {
            maxi = sum;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}
// if we need to find array which is giving this maximum sum then;
void maxsubarraysum4(int arr[], int n)
{
    int maxi = INT8_MIN;
    int sum = 0;
    int start = 0,ansstart=-1, end = -1;
    for (int i = 0; i < n; i++)
    {
        if (sum==0)
        { 
            start=i;
        }
        
        sum += arr[i];

        if (sum > maxi)
        {
            maxi = sum;
            ansstart=start;
            end=i;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }

    for (int i = ansstart; i <=end; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int n = 9;
    int arr[n] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    maxsubarraysum4(arr, n);

    return 0;
}