#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
    public:
        bool search_duplicate(vector<int>& nums, int target){
            int left = 0;
            int right = nums.size()-1;
            while(left<=right){
                int mid = left + (right-left)/2;
                if(nums[mid]== target) return true;
                if(nums[left] == nums[mid] && nums[mid] == nums[right]){
                    ++left;
                    --right;
                    continue;
                }
                else if(nums[left] <= nums[mid]){
                    if(nums[left]<=target && target<nums[mid]){
                        right = mid -1;
                    }
                    else{
                        left = mid +1;
                    }
                }    
                else{
                    if(nums[right]>=target && nums[mid]<target){
                        left = mid+1;
                    }
                    else{
                        right = mid -1;
                    }
                }        
            }
            return false;
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
    int target;
    cin>>target;
    cout << (s.search_duplicate(nums, target) ? "True" : "False") << endl;
    return 0;

}