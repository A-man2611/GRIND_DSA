#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int subarraySumHashing(vector<int>& nums, int k) {
            map<long long,int> presumMap;//sum and index is stored
            int maxLen = 0; // return value
            long long sum = 0; //sum value
            for(int i=0;i<nums.size();i++){
                sum = sum + nums[i];// Update prefix sum with current element
                if(sum == k){
                    maxLen = max(maxLen, i+1);// // If the prefix sum itself is k, then the subarray from index 0 to i is valid
                }
                long long rem = sum - k;
                if(presumMap.find(rem) != presumMap.end()){
                    int len = i - presumMap[rem];
                    maxLen = max(maxLen, len);  
                }
                //to handle zero case 
                if(presumMap.find(sum) == presumMap.end()){
                    presumMap[sum] = i;
                }
            }
            return maxLen;
        }

        int subarrayHashingNegative(vector<int>& nums, int k){
            unordered_map<int,int> presumFreq;
            presumFreq[0]= 1; // To handle the case where prefix sum itself is k
            
            // Key = a prefix sum encountered so far
            // Value = number of times that prefix sum has occurred (its frequency)
            int sum = 0, count = 0;
            for(int i=0;i<nums.size();i++){
                sum += nums[i];
                if(presumFreq.find(sum-k) != presumFreq.end()){
                    // .find() searches the map.
                    // .end() is the "not found" marker.
                    // != .end() → means the key was found.
                    count += presumFreq[sum-k];
                }
                presumFreq[sum]++;
            }
        }
        
};  

int main(){
    int n;
    cin>>n;
    
    vector<int> nums;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        nums.push_back(val);
    }
    int k;
    cin>>k;
    Solution s;
    cout<<s.subarraySumHashing(nums,k);
    return 0;
}
