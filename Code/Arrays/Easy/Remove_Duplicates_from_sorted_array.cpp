#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
    void removeDuplicatesway1(map<int,int>& mpp, int arr[], int n){
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        vector<int> vec;
        for(auto it : mpp){
            vec.push_back(it.first);
        }
        for(auto it:mpp){
            cout<<it.first<<" ";
        }
    }

    void removeDuplicate2(int arr[], int n){
        unordered_set<int> seen;
        for(int i =0; i<n;i++){
            seen.insert(arr[i]);
        }
        
        // Copy unique elements to vector
        vector<int> result(seen.begin(), seen.end());

        //sort
        sort(result.begin(),result.end());

            for(auto val : result){
                cout<<val<<" ";
            }
    }

    // https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
    int removeDuplicatesAddAtLast(vector<int>& nums){
        if(nums.size() == 0){
            return 0;
        }
        int res = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] != nums[i]){
                nums[res] = nums[i];
                res++;
            }
        }
        return res;
    }
};
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution s;
    map<int,int> mpp;

    vector<int> nums;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        nums.push_back(val);
    }
    s.removeDuplicatesway1(mpp,arr,n);
    s.removeDuplicate2(arr,n);
    s.removeDuplicatesAddAtLast(nums);
    return 0;
}
