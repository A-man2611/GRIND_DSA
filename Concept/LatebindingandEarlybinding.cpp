// CPP Program to illustrate early binding.
// Any normal function call (without virtual)
// is binded early. Here we have taken base
// and derived class example so that readers
// can easily compare and see difference in
// outputs.
// EARLY BINDING(compile time polymorphism)

#include<iostream>
using namespace std;
class base{
    public: 
        virtual void print(){
            cout<<"Print Base class"<<endl;
        }
        void show(){
            cout<<"show base class"<<endl;
        }
};
class derived : public base{
    public:
        void print(){
            cout<<"print derived class"<<endl;
        }
        void show(){
            cout<<"show derived class"<<endl;
        }
};
int main(){
    base* baseptr;
    derived obj1;
    baseptr = &obj1;
    // Virtual function, 
    // binded at runtime
    baseptr -> print();

    // Non-virtual function, 
    // binded at compile time
    baseptr -> show();
    return 0;
}

// Explanation: In the above code, the print() function is declared with the virtual keyword so it will be bound at runtime
//  and show() is non-virtual so it will be bound during compile time.

