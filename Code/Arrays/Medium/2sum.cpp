#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp; // Maps value -> index

        for (int i = 0; i < nums.size(); i++) {
            int diff = k - nums[i];  // What number would complete the pair?

            // If that number has been seen before, we found a solution
            if (mpp.count(diff)) {
                return {mpp[diff], i}; // Return indices of the pair
            }

            // Otherwise, store this number and its index for future reference
            mpp[nums[i]] = i;
        }

        return {}; // Return empty vector if no pair found
    }

    vector<int> twoSum1(vector<int>& nums, int k){
        unordered_map<int,int> indices;
        for(int i=0; i<nums.size();i++){
            indices[nums[i]] = i;
        }
        for(int i = 0; i<nums.size();i++){
            int diff = k - nums[i];
            if(indices.count(diff) && indices[diff] != i){
                return{i,indices[diff]};
            }
        }
        return {};
    }
};

int main()
{
    Solution s;
    int n;
    cin>>n;

    vector<int> nums;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        nums.push_back(ele);
    }

    int k;
    cin>>k;
    s.twoSum(nums,k);
    auto res = s.twoSum1(nums,k);
    if (!res.empty()) {
        cout << "Indices: " << res[0] << " " << res[1] << endl;
    } else {
        cout << "No valid pair found." << endl;
    }

    return 0;
}