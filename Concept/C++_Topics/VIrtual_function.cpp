#include<iostream>
using namespace std;

class base{
    public:
        virtual void display(){
                cout<<"Hi display 1"<<endl;
            }
};
class derived : public base{
    void display(){
        cout<< "Hii display 2"<<endl;
    }
};

int main(){
    base* baseptr;
    derived derivedobj;

    baseptr = &derivedobj;
    baseptr->display();
    return 0;
}