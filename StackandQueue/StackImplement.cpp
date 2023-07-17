#include <iostream>
using namespace std;
// using array
class Stack
{
public:
    int *arr;
    int top;
    int size;

    // constuctor
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack OverFlow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack UnderFlow" << endl;
        }
    }
    int peak()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
// using linkedlist
int main()
{
    Stack st(5);

    st.push(22);

    st.push(43);

    st.push(44);

    st.push(45);

    cout<<st.peak()<<endl;

    st.pop();

    cout<<st.peak()<<endl;

    st.pop();

    cout<<st.peak()<<endl;

    st.pop();

    cout<<st.isEmpty()<<" ";


    return 0;
}