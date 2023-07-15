// leetcode problem
#include <bits/stdc++.h>
using namespace std;
// Linear search approach which takes O(N) and space complexity of O(1);
int searchinrotated(vector<int> arr, int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i;
        }
    }
    return -1;
}
// we will optimise the solution using binary search
// which takes tc=>O(logn)
int searchinrotated1(vector<int> arr, int n, int k)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            return mid;
        }

        if (arr[s] <= arr[mid])
        {
            if (arr[s] <= k && k <= arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= k && arr[e] >= k)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }

        mid = s + (e - s) / 2;
    }

    return -1;
}
int main()
{
    vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = arr.size(), k = 1;
    int ans = searchinrotated1(arr, n, k);
    if (ans == -1)
    {
        cout << "Target cannot be found in the array" << endl;
    }
    else
    {
        cout << "Target is found at index: " << ans;
    }

    return 0;
}