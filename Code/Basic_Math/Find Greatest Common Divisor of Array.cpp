#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
        int findGCD(vector<int>& nums) 
        {
            sort(nums.begin(),nums.end());
            int a = nums.back();
            int b = nums[0];
            while(a != 0)
            {
                int temp = a;
                a = b % a;
                b = temp;
            }
            return b;
        }
};

int main(){
    Solution s;
    vector<int> nums = {2, 5, 6, 9, 10};
    int abc = s.findGCD(nums);
    cout<<abc;
    return 0;
}