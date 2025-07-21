#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void zerosAtBack(vector<int>& nums)
        {
            int cnt = 0;
            for(auto it = nums.begin(); it != nums.end();)
            {
                if(*it == 0)
                {
                    nums.erase(it);
                    cnt++;
                }
                else{
                    ++it;
                }
            }
            for(int i=0; i<cnt;i++){
                nums.push_back(0);
            }
        }
    };
        void zerosAtBack2(vector<int>& nums){
            int pos =0;
            //move all non zero elements forward
            for(int i=0; i<nums.size();i++){
                if(nums[i] != 0){
                    nums[pos++] = nums[i]; // its post increment after assignment it is incremented
                }
            }
            //fill the rest with zero
            while(pos<nums.size()){
                nums[pos++] = 0;
            }
    }


int main(){
    int n;
    cin>>n;
    vector<int> nums;

    //inserting the values
    for(int i = 0;i<n;i++){
        int ele;
        cin>>ele;
        nums.push_back(ele);
    }
    Solution s;
    s.zerosAtBack(nums);

    //printing the values
    for(auto it : nums){
        cout<<it<<" ";
    }
    return 0;
}