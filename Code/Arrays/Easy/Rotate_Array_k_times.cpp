#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void rotate(vector<int>& nums, int k){
            int n = nums.size();
            k = k % n;  // Handle k > n
            reverse(nums.begin(), nums.end());
            cout<<endl;
            cout<<"--1--"<<endl;
            for (int i = 0; i < nums.size(); i++) {
                cout << nums[i] << " ";
            }
            cout<<endl;
            cout<<"--2--"<<endl;

            reverse(nums.begin(), nums.begin() + k);
            for (int i = 0; i < nums.size(); i++) {
                cout << nums[i] << " ";
            }
            cout<<endl;

            cout<<"--3--"<<endl;

            reverse(nums.begin() + k, nums.end()); 
            for (int i = 0; i < nums.size(); i++) {
                cout << nums[i] << " ";
            }
            cout<<endl;
        }
};

int main(){
    Solution s;
    //size of 
    int n;
    cin>>n;
    vector<int> nums;
    int k;
    //inserting the values in K
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        nums.push_back(val);
    }
    cin>>k;
    s.rotate(nums,k);
    // Print the rotated array
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

}
