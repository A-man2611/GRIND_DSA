#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    public:
        Node(int data1,Node* next1){
            data = data1;
            next = next1;
        }
        Node(int data1){
            data = data1;
            next = nullptr;
        }
        //inserting the element
        static Node* arrtoLL(vector<int>& arr){
            Node* head = new Node(arr[0]);
            Node* mover = head;
            for(int i=1;i<arr.size();i++){
                Node* temp = new Node(arr[i]);
                mover->next = temp;
                mover = temp;
            }
            return head;
        }
        static void print(Node* head){
            while(head!=nullptr){
                cout<<head->data<<" ";
                head = head->next;
            }
        }
        //removing the head of the linked list
        static Node* removesHead(Node* head){
            if(head == NULL){return head;}
            Node* temp = head;
            head = head->next;
            delete(temp);   
            return head;
        }
};


int main(){
    vector<int> arr = {10,20,30,40,50};
    Node* head = Node::arrtoLL(arr);
    Node* temp = head;
    cout<<"Before Deletion:";
    Node::print(head);
    cout<<endl;
    cout<<"After Deletion:";
    head = Node::removesHead(head);
    Node::print(head);
    return 0;
    
}