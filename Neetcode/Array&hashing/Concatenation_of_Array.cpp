#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<int> getConcatenation(vector<int>& nums){
            int size = nums.size();
            for(int i=0;i<size;i++){
                int value = nums[i];
                nums.push_back(value);
            }
            return nums;
        }
};

int main(){
    vector<int> nums;
    //inserting values in vector
    int n;
    int ele;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>ele;
        nums.push_back(ele);
    }
    Solution s;
    auto vec = s.getConcatenation(nums);

    //printing the value
    for(int i =0; i<vec.size();i++){
        cout<<vec[i]<<", ";
    }
    return 0;

}