#include<iostream>
#include<string>
#include<vector>

using namespace std;
class Solution{
    public:
        string LongestCommonPrefix(vector<string>& strs){
            string ans = "";
            sort(strs.begin(),strs.end());
        }
};

int main(){
    vector<string> strs;
    int n;
    string ele;
    cin>>n;

    //inserting the value
    for(int i=0;i<n;i++){
        cin>>ele;
        strs.push_back(ele);
    }
    Solution s;
    cout<<s.LongestCommonPrefix(strs);
    return 0;
}