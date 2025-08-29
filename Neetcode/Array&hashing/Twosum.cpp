#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

/** unordered_map::count():
Purpose: It checks for the presence of a given key in the unordered_map.
Return Value: It returns 1 if an element with the specified key exists in the unordered_map, and 0 otherwise. This is because unordered_map does not allow duplicate keys, meaning each key can appear at most once.
Syntax: size_type count(const Key& k) const; where Key is the type of the key in the unordered_map.
Usage: It is commonly used to check if a key is present before attempting to access or modify its associated value.
**/ 
class Solution{
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int> um;
            
            for(int i =0;i<nums.size();i++)
            {
                int diff = target - nums[i];
                if(um.count(diff) && um[diff] != i){
                    return {um[diff],i};
                }
                um[nums[i]] = i;
            }
        return {};
    }
};

int main(){
    vector<int> nums;
    int target,size,t;
    cin>>size;
    cin>>target;
    //inserting the value
    for(int i=0;i<size;i++){
        cin>>t;
        nums.push_back(t);
    }
    Solution s;
    auto val = s.twoSum(nums,target);
    cout<<"answer is: "<<val[0]<<" "<<val[1]<<endl;
    return 0;
}