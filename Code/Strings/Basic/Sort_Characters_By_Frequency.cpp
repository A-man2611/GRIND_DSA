#include<iostream>
#include<map>
#include<string>

using namespace std;

class Solution{
    public:
        string frequencySort(string s){
            unordered_map<char,int> um;
            for(int i=0;i<s.length();i++){
                um[s[i]]++;
            }
            vector<pair<char,int>> chars(um.begin(),um.end());
            //This is passed to std::sort() as a custom comparator that tells it:
            // “Compare two pairs (a and b), and say that a should come before b if its frequency (a.second) is greater.”
            sort(chars.begin(),chars.end(), [](const pair<char,int>& a , pair<char,int>& b) {return a.second>b.second;});
            string result;
            for(auto const &p : chars){
                result += string(p.second,p.first);
            }
            
            return result;

        }
};
int main(){
    string s;
    cin>>s;
    Solution s1;
    cout<<s1.frequencySort(s);
    return 0;
}