#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> instersection(vector<int>& nums1, vector<int>& nums2){
            unordered_set<int> hashset(nums1.begin(),nums1.end());//nums1 vector
            unordered_set<int> result;//to store intersection value

            //check elements of vector nums2
            for(auto it : nums2){
                if(hashset.count(it))
                {
                    result.insert(it);
                }
            }
            // Convert result set to vector and return
            return vector<int>(result.begin(), result.end());
            
        }

};

int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;

    vector<int> nums1;
    vector<int> nums2;

    for(int i=0;i<n1;i++){
        int ele;
        cin>>ele;
        nums1.push_back(ele);
    }
    for(int i=0;i<n2;i++){
        int ele2;
        cin>>ele2;
        nums2.push_back(ele2);
    }
    Solution s;
    auto n3 = s.instersection(nums1,nums2);
    for(auto it:n3){
        cout<<it<<" ";
    }

    return 0;
}