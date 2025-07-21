#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int singleSolution(vector<int>& nums){
            map<int,int> mpp;
            for(int i=0;i<nums.size();i++){
                mpp[nums[i]]++;
            }
            for(auto it:mpp){
                if(it.second == 1){
                    return it.first;
                }//TC: O(N)
                    // SC: O(N)
            }
        return -1;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> nums;

    //inserting the vector
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        nums.push_back(ele);
    }
    Solution s;
    cout<<s.singleSolution(nums);
    return 0;
}