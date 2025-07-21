#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int num) {
        if (num <= 1) return false;
        if (num == 2) return true;

        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) return false;
        }
        return true;
    }

    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int, int> mpp;

        // Count frequency of each number
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }

        // Check if all frequencies are prime
        for (auto& it : mpp) {
            int freq = it.second;
            if (!isPrime(freq)) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution s;
    int n;
    cin >> n;

    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;          // take actual input from user
        nums.push_back(val);
    }

    cout << boolalpha << s.checkPrimeFrequency(nums) << endl;
    return 0;
}
