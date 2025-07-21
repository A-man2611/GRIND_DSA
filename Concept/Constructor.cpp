//constructor -->


// 1. Default constructor 2. Non-parameterized constructor
// 3. Parametrized constructor 4.copy constructor 5. move constructor

// -------------------------------------------------------------------------------
// -------------------------------------------------------------------------------

// 1. Default Constructor
// #include<iostream>
// using namespace std;

// class A{
//     public:

// };
// int main(){
//     A a;
//     return 0;
// }
// -------------------------------------------------------------------------------


// 2. Non-Paramaterized Constructor
// #include<iostream>
// using namespace std;

// class A{
//     public:
//         A(){
//             cout<<"constructor is getting called: "<<endl;
//         }    
// };
// int main(){
//     A a1;
//     return 0;
// }
// -------------------------------------------------------------------------------
// 3.Parameterized constructor

// #include<iostream>
// using namespace std;

// class A{
//     public:
//         int val;
//         //paramterized constructor
//         A(int x){
//             val = x;
//         }
// };

// int main(){
//     A a(10);
//     cout<<a.val;
//     return 0;
// }

// -----------------------------------------------------------------------
// -------------------------------------------------------------------------------
// NOTE: there is a concept suppose your one constructor is A() and second is A(int x) then this is known as constructor overloading    
// -------------------------------------------------------------------------------
// -------------------------------------------------------------------------------

// 4.Copy Constructor
// #include<iostream>
// using namespace std;

// class A{
//     public:
//         int val;
//         //parameterized constructor
//         A(int x){
//             val = x;
//         }

//         //COPY CONSTRUCTOR
//         A(A &a){ //&a pass by refernce
//             val = a.val;
//         }
// };
// int main(){
//     A a1(20);
//     A a2(a1);
//     cout<<a2.val<<endl;
//     return 0;

// }
// ------------------------------------------------------------------------------------------------------------------------------

// 5.Move constuctor
// #include<iostream>
// #include<vector>
// using namespace std;

// class MyClass{
//     private:
//         int b;
//     public: 
//         MyClass(int &&a) : b(move(a)){ // Declaring rvalue reference &&a: “l-value” refers to a memory location that identifies an object. 
//                                         // "r-value” refers to the data value that is stored at some address in memory.
//             cout<<"move constructor is called: "<<endl;
//         }
//         void display(){
//             cout<<b<<endl;
//         }
// };
// int main(){
//     int a = 4;
//     MyClass obj1(move(a)); // mve constuctor is called
//     obj1.display();
//     return 0;
// }