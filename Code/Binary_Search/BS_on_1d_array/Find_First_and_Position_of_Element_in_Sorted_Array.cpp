#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> firstndlast(vector<int>& nums, int x){
            vector<int> result;
            auto it1 = lower_bound(nums.begin(),nums.end(),x);
            auto it2 = upper_bound(nums.begin(),nums.end(),x);
            
            if(it1 == nums.end() || *it1 != x) return{-1,-1};

            int first = distance(nums.begin(),it1);
            int last = distance(nums.begin(),it2) - 1;
            result.push_back(first);
            result.push_back(last);
            return result;
        }
};

int main(){
    int n;
    cin>>n;
    
    vector<int> nums;
    //inserting the value
    for(int i =0;i<n;i++){
        int ele;
        cin>>ele;
        nums.push_back(ele);
    }
    int x;
    cin>>x;
    Solution s;
    vector<int> result = s.firstndlast(nums,x);
    for(auto i : result){
        cout<<i<<" ";
    }
    return 0;
}