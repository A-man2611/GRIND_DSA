#include<iostream>
#include<math.h>
using namespace std;

class Solution{
    public:
    bool Prime(int num){
        int count = 0;
        for(int i = 1 ; i <=sqrt(num);i++){
            if(num%i == 0){
                count +=1;
                if(num%i != i){
                    count += i;
                }
            }
            else{;}
        }
        if(count>=3){
            return false;
        }
        else{
            return true;
        }
    }
};

int main(){
    int num;
    cin>>num;
    Solution s;
    bool value = s.Prime(num);
    if (value == 0){
        cout<<"Not prime"<<endl;}
    else{
        cout<<"prime"<<endl;}

    return 0;
}