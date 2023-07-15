#include <iostream>
using namespace std;
void print(int i,int n){
    //base condition
    if (i>n){
        return;
    }
    print(i+1,n);
    cout<<i<<endl;
}
int main()
{


  int n=5;
  print(1,n);



    return 0;
}