#include <iostream>
#include <vector>
using namespace std;
int findmax1(vector<int> &nums){
    int n=nums.size();
    int count=0;int maxi=0;
    for(int i=0;i<n;i++){
        if(nums[i]==1){
            count++;
        }
        else{
            count=0;
        }
        maxi=max(maxi,count);
    }
    return maxi;

}
int main()
{

    vector < int > nums = { 1, 1, 0, 1, 1, 1 };
    cout<<findmax1(nums);

    return 0;
}