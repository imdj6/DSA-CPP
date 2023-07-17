#include <iostream>
#include <stack>
using namespace std;
int main()
{
    //stacks and its implementation
    //LIFO-->Last In First Out 
    //push->to push pop->pop last elem empty check empty peak top elment
    //size()->size of stack
    //creation of stack
    stack<int> s;
    s.push(9);
    s.push(3);
    s.push(1);
    //pop
    s.pop();

    cout<<"Printing top element:"<<s.top()<<" "<<endl;
    cout<<"Empty or not:"<<s.empty()<<" "<<endl;
    cout<<"Size of the stack is:"<<s.size()<<" "<<endl;

    //pop
    s.pop();

    cout<<"after pop:"<<endl;

    cout<<"Printing top element:"<<s.top()<<" "<<endl;
    cout<<"Empty or not:"<<s.empty()<<" "<<endl;
    cout<<"Size of the stack is:"<<s.size()<<" "<<endl;




    return 0;
}