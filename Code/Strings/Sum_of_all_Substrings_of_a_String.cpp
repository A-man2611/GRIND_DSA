#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s = "1234";
    int result = 0;
    int n = s.length();
    for(int i = 0;i<n;i++){
        for(int len =1; len<=n-i;len++){
            string sub = s.substr(i,len);
            int x = stoi(sub);
            result += x;
        }
    }
    cout<<result<<endl;
    return 0;
}