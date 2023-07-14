#include <iostream>
#include <vector>
using namespace std;
//optimal approach of tc->O(N) and sc->O(1)
//this is moore's voting algorithm
int majorityElement(vector<int> arr){
    int count=0;
    int el;
    for (int i = 0; i < arr.size(); i++)
    {
        if (count==0)
        {
            count++;
            el=arr[i];
        }
        if (el!=arr[i])
        {
            count--;
        }
        else{
            count++;
        }        
    }
    return el;
    
}
int main()
{

    vector<int> arr = {2,2,1,3,1,1,3,1,1};
    int ans = majorityElement(arr);
    cout<<"The majority elem is:"<<ans;

    return 0;
}