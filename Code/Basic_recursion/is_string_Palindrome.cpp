#include<iostream>
#include<string>
using namespace std;

class Solution
{
    public:
    bool Palindrome(int i,string s1)
    {
        if(i>=s1.size()/2){
            return true;
        }
        if(s1[i] != s1[s1.size()-i-1]) return false;
        return(Palindrome(i+1,s1));
        
    }
};

int main()
{
    string s1;
    cin >> s1;
    Solution s;
    if(s.Palindrome(0, s1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}