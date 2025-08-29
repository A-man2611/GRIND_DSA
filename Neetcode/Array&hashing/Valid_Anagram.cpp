#include<iostream>
#include<unordered_map>

using namespace std;

class Solution{
    public:
        bool ValidAnagram(string s, string t){
            unordered_map<int,int> us;
            unordered_map<int,int> ut;
            if(s.length() != t.length()) return false;

            for(int i=0;(i<s.length());i++){
                us[s[i]]++;
                ut[s[i]]++;
            }
            return us==ut;
    }    
};

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    Solution s1;
    cout<<s1.ValidAnagram(s,t);
    return 0;
}