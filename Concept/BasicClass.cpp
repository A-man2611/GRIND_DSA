#include<iostream>
using namespace std;

class Animal{
    public:
        string species;
        int age;
        int number;

        void eat(int ele){
            int eat = age + number;
            ele += eat;
        }
        void sleep(){

        }
        void makesound(){

        }
};

int main(){
    Animal a;
    int ele;
    cin>>ele;
    a.eat(ele);
    a.sleep();
}