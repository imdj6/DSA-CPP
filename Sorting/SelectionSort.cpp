#include <iostream>
using namespace std;
// Time complexity of selection sort is :O(N^2);
// Space complexity of selection sort is :O(1)
void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int mini = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }

    cout << "After Sorting::" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n = 6;
    int arr[n] = {13, 46, 24, 52, 20, 9};
    int arr1[n] = {5, 4, 3, 2, 1, 0};
    selectionsort(arr1, n);

    return 0;
}