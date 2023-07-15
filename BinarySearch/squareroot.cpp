#include <iostream>
using namespace std;
int square_root(int n){
    int s=1,e=n;
    while (s<=e)
    {   long long mid=s+(e-s)/2;
        long long val=mid*mid;
        if (val<=(long long)(n))
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return e;
}
int main()
{
    int n=16;
    
    cout<<square_root(n);

    return 0;
}