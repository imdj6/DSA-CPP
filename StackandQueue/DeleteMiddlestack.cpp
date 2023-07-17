#include <iostream>
#include <stack>
using namespace std;
void deletemiddle(int i,stack<int> &st)
{
    //base condition
    if (i>st.size()/2)  
    {
        st.pop();
        return;
    }
    int temp=st.top();
    st.pop();
    deletemiddle(i+1,st);
    st.push(temp);
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    deletemiddle(0,st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}