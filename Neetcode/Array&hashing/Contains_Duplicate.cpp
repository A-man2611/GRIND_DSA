#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Solution{
    public:
        bool containsDuplicate(vector<int>& nums){
            unordered_map<int,int> um;
            for(int i=0;i<nums.size();i++){
                um[nums[i]]++;
            }
            for(int i =0;i<um.size();i++){
                if(um[i] == 2){
                    return true;
                }
                
            }
        return false;
        }
};

int main(){
    vector<int> nums;
    int n;
    int ele;
    cin>>n;

    //inserting the value in nums
    for(int i=0;i<n;i++){
        cin>>ele;
        nums.push_back(ele);
    }

    Solution s;
    cout<<s.containsDuplicate(nums);
    return 0; 
}