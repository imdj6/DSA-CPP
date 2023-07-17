#include <iostream>
using namespace std;
int printsum(int n){
    //base condition
    if (n==0)
    {
        return 0;
    }
    return n+printsum(n-1);    
}
int main()
{
    int n=3;
    cout<<"The sum of n number is:"<<printsum(n);

    return 0;
}