#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int target)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    return -1;
}
int main()
{

    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int arr1[n]= {11,22,33,44,55};
    int target = 22;

    cout << binarysearch(arr1, n, target);

    return 0;
}