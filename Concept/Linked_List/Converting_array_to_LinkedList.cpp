#include<iostream>
#include<vector>

using namespace std;

// | Line                             | Meaning                                 |
// | -------------------------------- | --------------------------------------- |
// | `Node* temp = new Node(arr[i]);` | Creates a new node with `arr[i]`        |
// | `mover->next = temp;`            | Connects current node to the new node   |
// | `mover = temp;`                  | Advances the mover to the new last node |


class Node{
    public:
        int data;
        Node* next;

    public:
        Node(int data1, Node* next1){
            data = data1;
            next = next1;
        }
        Node(int data1){
            data=data1;
            next = nullptr;
        }
        //it will be node pointer because in the it will return pointer that will always point to head.
        //static is done becuse you need to make it available for scope in main.ß
        static Node* convertarr2LL(vector<int> &arr){
            Node* head = new Node(arr[0]);
            Node* mover = head;
            for(int i=1; i < arr.size();i++){
                Node* temp = new Node(arr[i]);
                mover->next = temp;
                mover = temp;
            }
            return head;
        }

};
int main(){
    vector<int> arr= {2,5,8,7};
    Node* head = Node::convertarr2LL(arr);
    Node* temp = head;
    //traversing array to linked list
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}