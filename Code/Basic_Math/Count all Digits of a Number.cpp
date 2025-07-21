#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    cout<<"Enter The value:";
    cin>>a;
    string ab = to_string(a);
    
    cout<<"Size of ab "<<ab.size()<<endl;
    cout<<"Lenght of ab "<<ab.length()<<endl;
    
    int length = ab.length();
    cout<<"size of the entered number is : "<<length<<endl;
    return 0;

}

