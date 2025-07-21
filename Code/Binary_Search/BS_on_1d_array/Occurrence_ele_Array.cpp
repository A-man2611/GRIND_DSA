// You are given an integer array nums, an integer array queries, and an integer x.
// For each queries[i], you need to find the index of the queries[i]th occurrence of x in the nums array.
// If there are fewer than queries[i] occurrences of x, the answer should be -1 for that query.
#include<bits/stdc++.h>
using namespace std;

class Solution{
    vector<int> OccurenceElemArray(vector<int>& nums, vector<int>& queries, int x){
        vector<int> res;
        unordered_map<int,int> mp;
        int occ =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == x){
                occ++;
                mp[occ] = i;
            }
        } 
        for(int j=0;j<queries.size();j++){
            if(mp.find(queries[j])!= mp.end()){
                res.push_back(mp[queries[j]]);
            }
            else
                res.push_back(-1);
        }
        return res;
    } 
};

int main(){
    int n1;
    cin>>n1;

    vector<int> nums;
    //inserting into the value 
    for(int i=0;i<n1;i++){
        int ele;
        cin>>ele;
        nums.push_back(ele);
    }
    int n2;
    cin>>n2;
    vector<int> queries;
    //inserting into the value 
    for(int i=0;i<n2;i++){
        int ele;
        cin>>ele;
        queries.push_back(ele);
    }
    int x;
    cin>>x;
    Solution s;
    vector<int> results = s.OccurenceElemArray(nums,queries,x);
    for(auto it:results){
        cout<<it<<" ";
    }
    return 0;
}