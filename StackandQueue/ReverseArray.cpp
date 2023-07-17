#include <iostream>
#include <stack>
using namespace std;
int main()
{

    //The question is for array as well as string
    string str="Danish";
    stack<char> st;
    for (int i = 0; i <str.length(); i++)
    {
        char ch=str[i];
        st.push(ch);
    }
    str="";
    while (!st.empty())
    {
        char ch=st.top();
        str+=ch;
        st.pop();
    }
    cout<<str;

    return 0;
}