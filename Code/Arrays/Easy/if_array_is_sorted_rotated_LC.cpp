#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool arrayRotated(vector<int>& nums)
        {
            int count = 0;
            int n = nums.size();
            for(int i = 0;i<n;i++)
            {
                if(nums[i] > nums[(i+1) % n]){
                    count++;
                }
            }
            return count<=1;
        }   
};

int main(){
    Solution s;
    int n;
    cin>>n;
    vector<int> nums;
    
    //inserting elements in vector nums
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        nums.push_back(val);
    }
    cout << (s.arrayRotated(nums) ? "true" : "false") << endl;
}