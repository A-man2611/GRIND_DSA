#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
        int kTimes(vector<int>& nums){
            int left=0;
            int right=nums.size()-1;
            while(left<right){
                int mid = left + (right - left)/2;
                if(nums[mid] > nums[right]){
                    left = mid +1;
                }
                else{
                    right = mid;
                }
            }
            return right;
        }
};

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        nums.push_back(ele);
    }
    Solution s;
    cout<<s.kTimes(nums)<<endl;
    return 0;
}