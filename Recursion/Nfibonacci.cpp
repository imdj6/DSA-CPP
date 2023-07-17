#include <iostream>
using namespace std;
int nfibonnaci(int n){
    if (n<=1)
    {
        return n;
    }
    int slast=nfibonnaci(n-1);
    int last=nfibonnaci(n-2);
    return slast+last;
}
int main()
{
    int n=6;
    cout<<nfibonnaci(n);

    return 0;
}