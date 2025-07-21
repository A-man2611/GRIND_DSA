#include<iostream>
#include<string>
using namespace std;

class Solution{
    public: 
        string reverseString(string s){
            vector<string> words;
            string word = " ";
            for(auto ch:s){
                if(ch == ' '){
                    if(!word.empty()){
                        words.push_back(word);
                        word = " ";
                    }
                }
                else
                    word +=ch;                
            }
            if(!word.empty()) words.push_back(word);
            word ="";
            reverse(s.begin(),s.end());

            for(int i=0;i<words.size()-1;i++){
                word+=words[i];
                if(i<words.size()-1){
                    word += " ";
                }
            }
            return word;
    }
};
int main(){
    string s;
    cin>>s;
    Solution obj;
    obj.reverseString(s);
}