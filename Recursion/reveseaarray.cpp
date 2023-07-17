#include <iostream>
using namespace std;
void revesearray(int arr[], int s, int e)
{
    if (s > e)
    {
        return;
    }
    swap(arr[s],arr[e]);
    revesearray(arr,s+1,e-1);
}
int main()
{
    int arr[7] = {0, 1, 2, 3, 4, 5, 6};
    int n = 7;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    revesearray(arr, 0, n-1);
    cout << "After reversing" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}