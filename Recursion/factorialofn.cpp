#include <iostream>
using namespace std;
int factorial(int n)
{
    // base condition
    if (n == 0)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int n = 3;
    cout <<"the factorial of n is::"<< factorial(n);

    return 0;
}