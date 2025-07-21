// 1. It is not in continious location.
// 2. Unlike array it can increase and decrease.
//stack queue is primary example where it is used.

//Space - 32 bit- int (4bytes) and * (4bytes) but in 64 bit - int (4bytes) and *(pointer)(8bytes)
#include<iostream>
using namespace std;

struct Node{
    public: 
        int data;
        Node* next;

    public:
        Node(int data1,Node* next1){
            data = data1;
            next = next1;
        }    
};
int main(){
    vector<int> arr= {2,5,8,7};
    Node* y = new Node(arr[0],nullptr); // pointer to the memory location
    cout<<y<<endl;
    cout<<y->data<<endl;
    cout<<y->next<<endl;
}