#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int Consecutive_1s_array(vector<int>& nums){
            set<int> s;
            int cnt =0;
            for(int i=0;i<nums.size();i++){
                if(nums[i] == 1){
                    cnt +=1;
                }
                
                else
                {
                    s.insert(cnt);
                    cnt = 0;
                }
            }

            // VVVVVIMP
            s.insert(cnt);

            // if all were 0s
            if (s.empty()) return 0;
            // TO RETRIEVE THE LAST ELEMENT FROM SET
            auto it = s.end();
            --it;
            return *it;            
        }
};
int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i = 0;i<n;i++){
        int ele;
        cin>>ele;
        nums.push_back(ele);
    }
    Solution s;
    cout<<(s.Consecutive_1s_array(nums));
    return 0;

    
}