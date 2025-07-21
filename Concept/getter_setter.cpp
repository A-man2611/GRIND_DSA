#include<iostream>
using namespace std;
                                // s ->>>> setfunction(public) ->>>>> salary
class Employee{
    private:
    //encapsulation
        int salary;
    public:
        void setsalary(int s){
            salary = s;
        }
        int getsalary(){
            return salary;
        }

};

int main(){
    Employee obj;
    int s;
    cin>>s;
    obj.setsalary(s);
    cout<<"My secret salary is: "<<obj.getsalary()<<endl;
    return 0;
}