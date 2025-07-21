#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int searchInsert(vector<int>& nums, int target){
            auto it = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
            return it;
            // lower_bound returns the first position where target can go without breaking the sort order.
            // Subtracting nums.begin() gives the exact 0-based index (or nums.size() if it's beyond the last element) 
        }
};

int main(){
    int n;
    cin>>n;
    vector<int> nums;

    //inserting the values 
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        nums.push_back(ele);
    }
    int target;
    cin>>target;
    Solution s;
    cout<<s.searchInsert(nums,target);
    return 0;
}