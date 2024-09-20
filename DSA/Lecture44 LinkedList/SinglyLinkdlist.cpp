#include<iostream>
#include<map>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        int value = this-> data;
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free"<<endl;
    }
};

void print(Node* &head) {
    if(head == NULL) {
        cout<<"List is emplty"<<endl;
        return;
    }
    Node* temp = head;

    while(temp != head){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertatTail(Node* &tail, int d){
    //new node create 
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail,Node* &head,int position, int d){
    if(position ==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt=1;

    while(cnt<position-1) {
        temp = temp->next;
        cnt++;
    }

    if(temp->next ==NULL){
        insertatTail(tail,d);
        return ;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNode(int position, Node* & head){
    if(position ==1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else {
        Node* curr = head;
        Node* prev = NULL;

        int cnt=1;
        while(cnt<position){
            prev = curr;
            curr =curr->next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}


int main(){
   //create a new node
   Node* node1 = new Node(10);
   //cout<<node1 -> data <<endl;
   //cout<<node1 -> next <<endl;

   //head pointed to node1
   Node* head = node1;
   Node* tail = node1;
   //print(head);
   insertAtHead(head,12);
   insertatTail(tail,12);
   print(head);
   print(tail);

   insertAtPosition(tail,head,4,22);
   print(head);
   cout<<"head"<<head->data<<endl;
   cout<<"tail"<<tail->data<<endl;

}