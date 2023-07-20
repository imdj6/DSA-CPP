#include <bits/stdc++.h>
using namespace std;
bool isvalid(string str)
{
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        // this is opening bracket
        if (str[i] == '{' || str[i] == '(' || str[i] == '[')
        {
            st.push(str[i]);
        }
        // if closing bracket
        else
        {
            if (!st.empty())
            {
                char ch = str[i];
                char top = st.top();
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '['))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        if (st.empty())
        {
            return true;
        }

        return false;
    }
}
int main()
{

    string str = "{([])}";    // true
    string str1 = "()[{}()]"; // true
    string str2 = "[()";      // false

    if (isvalid(str))
    {
        cout << "Varid paranthesis" << endl;
    }
    else
    {
        cout << "Invalid Paranthesis" << endl;
    }

    return 0;
}