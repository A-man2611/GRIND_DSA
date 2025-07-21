#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int lastOccurrence(vector<int>& nums, int x){
        auto it = upper_bound(nums.begin(), nums.end(), x);
        if (it == nums.begin()) return -1; // x is smaller than all elements

        it--; // Move to the last element <= x

        if (*it != x) return -1; // x not found

        return distance(nums.begin(), it); // return index
    }
};

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int x;
    cin >> x;
    Solution s;
    cout << s.lastOccurrence(nums, x) << endl;
    return 0;
}
