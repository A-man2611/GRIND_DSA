#include<iostream>
using namespace std;

class solution
{
    public: 
        void func(int i, int num){
            if(i<num){
                cout<<"Aman"<<endl;
            }
            func(i+1,num);
        }
};
int main(){
    solution s;
    int num;
    cin>>num;
    s.func(1,num);
    return 0;

}
