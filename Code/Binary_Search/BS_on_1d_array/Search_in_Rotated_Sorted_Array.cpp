#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int search(vector<int>& nums, int target){
        int left = 0; // start of array
        int right = static_cast<int>((nums.size()) - 1); // end of array
        while(left <= right){ // standard binary search condition
            int mid = static_cast<int>(left + (right - left) / 2); // safe mid calculation
            if(nums[mid] == target) return mid; // target found
            else if(nums[mid] >= nums[left]){ // left half is sorted
                if(nums[left] <= target && target < nums[mid]) // target in left half
                    right = mid - 1; // move left
                else
                    left = mid + 1; // move right
            }else{ // right half is sorted
                if(nums[mid] < target && target <= nums[right]) // target in right half
                    left = mid + 1; // move right
                else
                    right = mid - 1; // move left
            }
        }
        return -1; // not found
    }
};

int main(){
    int n;
    cin >> n; // input array size
    vector<int> nums; // input vector
    for(int i = 0; i < n; i++){ // input elements
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }
    int target;
    cin >> target; // input target
    Solution s;
    cout << s.search(nums, target); // print result
    return 0;
}
