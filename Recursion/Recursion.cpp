#include <iostream>
using namespace std;
void print(int i,int n)
{
    //base condition
    if (i>n)
    {
        return;
    }
    
    cout<<"Danish"<<endl;
    print(i+1,n);
}
int main()
{
    int n=5;
    print(1,n);

    return 0;
}