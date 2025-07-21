#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Hello";
    cout<<str<<endl; // entire string
    cout<<str[2]<<endl; // single character
    
    string tara = "tara";
    str = tara; // adding value to string variable
    cout<<str<<endl;

    //updating the character
    str[0] = 'p'; //always remember ' ' is used instead " "
    cout<<str<<endl;

    //find length of string
    int length = str.length();
    cout<<"length: "<<length<<endl;
    //same just used because vector uses size()
    int size = str.size();
    cout<<"size: "<<size<<endl;

    //take string input and output the value:
    string name;
    cin>>name;
    cout<<"Your name is: "<<name<<endl;



    return 0;

}