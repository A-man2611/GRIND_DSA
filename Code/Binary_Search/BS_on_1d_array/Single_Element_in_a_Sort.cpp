#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        int singleNonDuplicate(vector<int>& nums){
            int left = 0;
            int right = nums.size()-1;
            while(left<right){
                int mid = left + (right-left)/2;
                if(mid%2 ==1){
                    mid --; //pair always strts at even 0,0,1,1 index of 0 and 1 are even
                }
                if(nums[mid] != nums[mid+1]){
                    right = mid;
                }
                else{
                    left = mid + 2; //If nums[mid] == nums[mid+1], it means the pair is complete, so the single element must be after mid+1. We move the left pointer to mid + 2.
                }
            }
            return nums[left];
        }
};

int main(){
    int n;
    cin>>n;

    vector<int> nums;
    for(int i =0;i<n;i++){
        int ele;
        cin>>ele;
        nums.push_back(ele);
    }
    Solution s;
    cout<<s.singleNonDuplicate(nums)<<endl;
    return 0;
}   

