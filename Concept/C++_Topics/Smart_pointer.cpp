//firstly we will understand memory leak
// #include<iostream>
// using namespace std;

// void fun(){
//     for(int i=0;i<1000000;i++){
//         cout<<"Hi"<<endl;
//         int *a = new int(10); //assigned a heap variables
//         // to safe ourself from memory leak we will use delete
//         delete a;
//     }
// }
// int main(){
//     fun();
//     return 0;
// }            



////SMART POINTER now
// #include<iostream>
// using namespace std;
// class Wrapper{
//     private:
//         int * mem;
//     public:
//         Wrapper(int* a) : mem(a){
//             cout<<"inside ctr \n";
//         }
//         ~Wrapper(){
//             cout<<"str"<<endl;
//             delete mem;
//         }
// };
// int main(){
//     Wrapper obj(new int(10));
//     return 0;
// }

//Auto_ptr X(deprected)
// #include<iostream>
// using namespace std;
// int main(){
//     //pointer delaration
//     auto_ptr<int> ptr1(new int(10));
//     cout<<*ptr1<<endl;

//     //copy ownership
//     auto_ptr<int> ptr2 = ptr1;
//     cout<<*ptr2<<endl;
// }

//unique pointer
// 1 pointer at a time no copy nothing 
// #include <iostream>
// using namespace std;

// class Rectangle {
//     int length;
//     int breadth;

// public:
//     Rectangle(int l, int b) {
//         length = l;
//         breadth = b;
//     }
//     int area() { return length * breadth; }
// };

// int main() {

//     unique_ptr<Rectangle> P1(new Rectangle(10, 5));
//     cout << P1->area() << endl;

//     unique_ptr<Rectangle> P2;

//     // Copy the addres of P1 into p2
//     P2 = move(P1);
//     cout << P2->area();
//     return 0;
// }


// 3.Shared pointer
#include <iostream>
using namespace std;

class Rectangle {
    int length;
    int breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    int area() { return length * breadth; }
};

int main() {
    
    shared_ptr<Rectangle> P1(new Rectangle(10, 5));
    cout << P1->area() << endl;

    shared_ptr<Rectangle> P2;
    
    // P1 and P2 are pointing 
    // to same object
    P2 = P1;
    cout << P2->area() << endl;
    cout << P1->area() << endl;
    cout << P1.use_count();
    return 0;
}