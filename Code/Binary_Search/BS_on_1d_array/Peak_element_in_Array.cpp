#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        int findPeakElement(vector<int>& nums) {
            int left = 0;
            int right = nums.size()-1; //size error (overflow)
            while(left<right){
                int mid = left + (right-left)/2;
                if(nums[mid] > nums[mid+1]){
                    right = mid;
                }
                else{
                    left = mid +1;
                }
            }
        return left;
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
    cout<<s.findPeakElement(nums)<<endl;
    return 0;
}
