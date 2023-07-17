#include <iostream>
#include <stack>
using namespace std;
void InsertAtbottom(int x,stack<int> &st){
    //base case
    if (st.empty())
    {
        st.push(x);
        return;
    }
    int temp=st.top();
    st.pop();
    InsertAtbottom(x,st);
    st.push(temp);
}
int main()
{
    stack<int> st;
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    //insert at the bottom of the stack
    InsertAtbottom(10,st);

    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }


    return 0;
}