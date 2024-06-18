#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int data;
     Node* next;
     
    Node(int d){
        this-> data = d;
        this-> next = NULL;
    }
};

void insertAt_head(Node* &head , int d){
    Node* temp = new Node(d);
    temp-> next = head;
    head = temp;
}

void insertAt_tail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail-> next = temp;
    tail = temp;
}

void insertAt_position(Node* &head , Node* &tail , int d , int position){
    if(position == 1){
        insertAt_head(head , d);
        return ;
    }

    else{
        int cnt = 1;
        Node* temp = head;
        while(cnt < position - 1){
            temp = temp-> next;
            cnt++;
        }
        if(temp-> next ==NULL){
            insertAt_tail(tail , d);
            return ;
        }
        Node* NodeToInsert = new Node(d);
        NodeToInsert-> next = temp-> next;
        temp-> next = NodeToInsert;
    }
}

void print(Node* &head){
    if(head == NULL){
        return ;
    }

    Node* temp = head;
    while(temp != NULL){
        cout<<temp-> data<<" ";
        temp = temp-> next;
    }
    cout<<endl;
}

Node* remove_duplicate(Node* &head , Node* &tail){
    if(head == NULL){
        return NULL;
    }


    Node* curr = head;
    while(curr!= NULL){
        Node* next1 = curr-> next;
        while(next1 != NULL){
            if((next1->next!= NULL)&& (curr-> data == next1-> next-> data)){
                Node* next_next = next1-> next -> next;
                Node* temp = next1-> next;
                delete temp;
                next1-> next = next_next;
            }
            else{
                next1 = next1-> next;
            }
        }
            curr = curr-> next;
    }

    curr = head ;
    while(curr != NULL){
        if((curr-> next != NULL) && (curr-> data == curr-> next -> data)){
            if(curr->next->next==NULL){
                tail = curr;
            }
            Node* next_next = curr-> next -> next;
            Node* temp = curr-> next;
            delete temp;
            curr-> next = next_next;
        }
        else{
            curr = curr-> next ;
        }
    }
    
    return head ;
}

int main(){
    Node* node1 = new Node(5) ;
    Node* head = node1 ;
    Node* tail = node1 ;
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAt_head(head , 3);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAt_head(head , 2);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAt_head(head , 5);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAt_head(head , 5);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAt_tail(tail , 3);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAt_tail(tail , 4);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAt_tail(tail , 4);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAt_tail(tail , 4);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAt_tail(tail , 4);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAt_tail(tail , 4);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAt_tail(tail , 6);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAt_position(head , tail , 4 , 1);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAt_position(head , tail , 4 , 1);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;


    Node* AfterRemovingDuplicate = remove_duplicate(head , tail) ;
    if(AfterRemovingDuplicate == NULL){
        cout<<"list is empty"<<endl;
    }
    else{
        cout<<"list after removing duplicate"<<endl;
        print(head);
        cout<<"head is : "<<head-> data<<endl;
        cout<<"tail is : "<<tail-> data<<endl;
    }


    return 0;
}