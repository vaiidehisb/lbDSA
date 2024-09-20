/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
************************************************************/

Node* UniqueSortedLL(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* curr = head;
    while(curr!= head){
        if((curr -> next != NULL) && curr -> data == curr->next->data){
            Node* nextnext = curr->next->next;
            Node* Ndelete= curr->next;
            delete(Ndelete);
            curr -> next = nextnext;
        }
        else {
            curr = curr->next;
        }
    }
    return head;
}