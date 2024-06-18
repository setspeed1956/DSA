#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int data;
     Node *next;
    
    Node(int data){
        this-> data = data;
        this-> next = NULL;
    }
    ~Node(){
        int value = this-> data;
        if(this-> next != NULL){
            delete next;
            this-> next = NULL;
        }
        cout<<"memory is free for node with data :"<<value<<endl;
    }
};

void InsertAtHead(Node* &head , int d){
    Node *temp = new Node(d);
    temp-> next= head;
    head = temp;
}

void InsertAtTail(Node* &tail , int d){
    Node *temp = new Node(d);
    tail-> next = temp ;
    tail= temp ;
}
void InsertAtPosition(Node* &tail ,Node* &head , int d , int position){

    if(position ==1 ){
        InsertAtHead(head , d);
    }
    else{
        Node *temp= head;
        int index = 1;
        while(index < position -1){
            index++;
            temp = temp->next;
        }
        if(temp->next == NULL){
            InsertAtTail(tail , d);
            return ;
        }
        Node *nodetoinsert = new Node(d);
        nodetoinsert->next = temp->next;
        temp->next= nodetoinsert;
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp-> data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void DeleltingAtposition(Node* &tail , Node* &head , int position){
    if(position == 1){
        Node* temp = head ;
        head = head->next ;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* current= head;
        Node* previous = NULL;
        int cnt =1 ;
        while(cnt< position){
            previous = current;
            current = current->next;
            cnt++;
        }
        if(current->next == NULL){
            tail = previous ;
        }
        previous->next = current->next;
        current->next= NULL;
        delete current;
    }
}




int main(){
    Node *node1 = new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    Node *head = node1 ;
    Node *tail = node1;
    print(head);

    InsertAtHead(head , 20);
    print(head);

    InsertAtHead(head , 15);
    print(head);

    InsertAtTail(tail ,30);
    print(head);

    InsertAtPosition(tail , head , 23 ,  4 );
    print(head);

    InsertAtPosition(tail , head , 70 ,  6);
    print(head);

    InsertAtPosition( tail, head , 100 ,  1 );
    print(head);

    InsertAtPosition(tail , head , 50 ,  1 );
    print(head);

    DeleltingAtposition(tail ,head , 2);
    print(head);
    cout<<head-> data <<endl;
    cout<<tail-> data<<endl;
    DeleltingAtposition(tail ,head , 7);
    print(head);
    cout<<head-> data <<endl;
    cout<<tail-> data<<endl;

    DeleltingAtposition(tail ,head , 6);
    print(head);
    cout<<head-> data <<endl;
    cout<<tail-> data<<endl;
    return 0 ;
}