#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s = "abcd";
    int n = s.length();

    for(int i = 0; i<n;i++){
        for(int len=1;len<=n-i;len++){
            cout<<s.substr(i,len)<<endl;
        }
    }
    return 0;
}

