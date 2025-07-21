#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int findceil(vector<int> nums, int x){
            auto it = lower_bound(nums.begin(),nums.end(), x);
            if(it == nums.begin()) return -1;
            return *(it);
        }
        int findfloor(vector<int> nums, int x){
            auto it = upper_bound(nums.begin(),nums.end(), x);
            if(it == nums.begin()) return -1;
            return *prev(it);
        }

};
int main(){
    int n;
    cin>>n;
    vector<int> nums;
    //inserting the elements
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        nums.push_back(ele);
    }
    int x;
    cin>>x;
    Solution s;
    cout<<s.findceil(nums,x);
    cout<<" ";
    cout<<s.findfloor(nums,x);
    return 0;
}