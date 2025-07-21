#include<iostream>
using namespace std;

class Solution {
    public:
        bool isPalindrome(int n) {
           if (n<0){
            return false;
           }
           int reversed = 0;
           int original = n;
           while(n!=0)
           {
            int digit = n % 10; 

            if(reversed > INT_MAX/10 || (reversed == INT_MAX/10 && digit > 7)){
                return 0;
            }

            if(reversed < INT_MIN/10 || (reversed == INT_MIN/10 && digit<-8)){
                return 0;
            }

            reversed = reversed * 10 + digit;
            // cout<<reversed<<endl;
            n /=10;
           }
           return (original == reversed);
        }
    };
            

int main()
{
    Solution s;
    int n;
    cin>>n;
    bool a = s.isPalindrome(n);
    cout<<a<<endl;
    return 0;
}