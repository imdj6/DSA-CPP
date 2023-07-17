#include <iostream>
using namespace std;
int solve(int i, string s, string &f)
{
    if (i == s.length())
    {
        cout << f << " ";
        return;
    }
    // picking
    f = f + s[i];
    solve(i + 1, s, f);
    // poping out while backtracking
    f.pop_back();
    // not take
    solve(i + 1, s, f);
}
int main()
{
    string s = "312";
    string f = "";
    cout << "All possible subsequences are: " << endl;
    cout<<solve(0, s, f);

    return 0;
}