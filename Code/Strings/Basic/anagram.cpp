#include<iostream>
#include<string>
#include<map>

using namespace std;

class Solution{
    public:
        bool isAnagram(string s, string t){
            unordered_map<char,int> us;
            unordered_map<char,int> ut;
            if(s.length()!=t.length()) return false;
            for(int i=0;i<(s.length());i++){
                us[s[i]]++;
                ut[t[i]]++;
            }
            for(auto &pair : us){   
                cout<<pair.first<<": "<<pair.second<<endl;
            }
            return us ==ut; // comparing the frequency maps.
        }
};

int main(){
    string s,t;
    cin>>s>>t;
    Solution s1;
    cout<<s1.isAnagram(s,t);
    return 0;
}