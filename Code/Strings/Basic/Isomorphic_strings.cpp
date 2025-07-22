// all three if conditional will work first if will check whether the letter is presnt in map
// second wif conditional will check whether the 1st letter in the second string is present
// if not it will store with respect to index value or if found then it will show as the last value hence failing third if 

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Solution{
    public:
        
        bool isIsomorphic(string s, string t){
            unordered_map<char,int> charIndexS;
            unordered_map<char,int> charIndexT;
            
            for(int i = 0;i<s.length();++i){
                if(charIndexS.find(s[i]) == charIndexS.end()){ 
                    charIndexS[s[i]] = i;
                }
                if(charIndexT.find(t[i]) == charIndexT.end()){
                    charIndexT[t[i]] = i;
                }
                if(charIndexS[s[i]] != charIndexT[t[i]]){
                    return false;
                }
            }
        return true;
        }
};
int main(){
    string s,t;
    cin>>s;
    cin>>t;
    Solution s1;
    cout<<s1.isIsomorphic(s,t);
    return 0;
}