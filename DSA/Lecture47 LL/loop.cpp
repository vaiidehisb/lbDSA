class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };
Node* FloydDetection(Node* head){
    if(head == NULL ){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while(slow!=NULL && fast!=NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast){
            return slow;
        }
    }
    return slow;
}


Node* getStartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* intersection = FloydDetection(head);
    if(intersection == NULL){
        return NULL;
    }

    Node* slow = head;

    while (slow != intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}

 Node* removeLoop(Node *head){
        if(head == NULL){
            return NULL:
        }
        Node *startOfLoop = getStartingNode(head);
        
        if(starOfLoop == NULL){
            return head;
        }

        Node* temp = startOfLoop;

        while(temp -> next != startOfLoop){
            temp = temp->next;
        }
        temp -> next = NULL;
        return temp;
    }