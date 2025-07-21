#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        int findMin(vector<int>& nums){
            int left =0;
            int right = nums.size()-1;
            while(left<right)
            {
                int mid = left + (right-left)/2;
                if(nums[mid] > nums[right]){
                    left = mid + 1;// min must be in right half
                }
                else{
                    right = mid;// min could be at mid or in left half
                }
            }
            return nums[left]; //left ==right at the end
        }
};

int main()
{
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        nums.push_back(ele);
    }  
    Solution s;
    cout<<s.findMin(nums);
    return 0;
}