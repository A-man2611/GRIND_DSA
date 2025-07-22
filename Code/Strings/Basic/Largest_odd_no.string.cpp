// ### Explanation

// - **Purpose:**  
//   Finds the largest substring (from the start) of `num` that ends with an odd digit.

// - **How it works:**
//   1. **Loop from the end:**  
//      The loop starts from the last character of the string and moves left.
//   2. **Check for odd digit:**  
//      `(num[i] - '0') % 2 != 0` checks if the digit at position `i` is odd.
//   3. **Return substring:**  
//      If an odd digit is found, `num.substr(0, i + 1)` returns the substring from the start up to and including that digit.
//   4. **No odd digit:**  
//      If no odd digit is found, it returns an empty string.

// ### Example

// - Input: `"35420"`
// - Last odd digit is `'5'` at index 1.
// - Returns: `"35"`

// - Input: `"4206"`
// - No odd digit, returns: `""`

// **Summary:**  
// This function efficiently finds the largest prefix of the string that ends with an odd digit.

#include <iostream>
#include <string>
using namespace std;

class Solution{
    public:
        string largetsOddNumber(string num){
            //how substr works
            
            for(int i = num.length()-1;i>=0;--i){
                if((num[i] - '0') %2 != 0){
                    return num.substr(0,i+1);
                }
            }
            return "";
        }
};

int main(){
    string num;
    cin>>num;
    Solution s;
    cout<<s.largetsOddNumber(num);
    return 0;
}