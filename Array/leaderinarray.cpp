#include <iostream>
#include <vector>
using namespace std;
void printleaders(int arr[], int n)
{

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        bool leader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                leader = false;
                break;
            }
            if (leader)
            {
                ans.push_back(arr[i]);
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int n = 6;
    int arr[n] = {10, 22, 12, 3, 0, 6};

    printleaders(arr, n);

    cout << endl;

    return 0;
}