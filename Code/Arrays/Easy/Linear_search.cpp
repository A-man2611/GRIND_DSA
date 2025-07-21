#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int linearSearch(vector<int>& nums, int find){
            for(int i=0; i<nums.size();i++){
                if(nums[i] == find){
                    return i;//  found
                }
            }
            return -1;// Not found
        }
};

int main(){
    vector<int> nums;
    int n;
    cin>>n;

    //inserting the element
    for(int i =0;i<n;i++){
        int ele;
        cin>>ele;
        nums.push_back(ele);
    }
    int find;
    cin>>find;
    Solution s;
    cout<< s.linearSearch(nums,find)<<endl;
    return 0;
}