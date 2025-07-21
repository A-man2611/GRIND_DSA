// A virtual function is called a pure virtual function if it does not have any implementation and is assigned = 0.
// A class that contains a pure virtual function is called an abstract class.
#include<iostream>
using namespace std;

class base{
    public:
        virtual void Display() = 0;

};
class Derived : public base{
    void Display() override{
        cout<<"Hi"<<endl;
    }
};

int main(){
    base* baseptr;
    Derived obj1;
    baseptr = &obj1;
    baseptr -> Display();
    return 0;
}