#include<iostream>
#include<string>
using namespace std;

class Solution{
    public:
        string removeOuterParentheses(string s){
            string result;
            int balance = 0;

            for(int i=0;i<s.length();i++){
                if(s[i] == '('){
                    if(balance>0){ // count this as flag
                        result = result + s[i];
                    }
                    balance++;
                }
                else{
                    balance--;
                    if(balance>0){
                        result =result + s[i];
                    }
                }
            }
            return result;
        }
};

int main(){
    string s;
    cin>>s;
    Solution s1;
    cout<<s1.removeOuterParentheses(s)<<endl;
    return 0;
}