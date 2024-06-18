#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int data ;
     Node* prev;
     Node* next;
    
    Node(int d ){
        this-> data = d;
        this-> prev = NULL;
        this-> next = NULL;
    }
};

void print(Node* &head){
    Node* temp = head ;
    while(temp != NULL){
        cout<<temp-> data <<" ";
        temp = temp-> next ;
    }
    cout<<endl;
}

void insertAttail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void reverseDoublyLinkedList(Node* &head , Node* tail){
    Node* previous2 = NULL;
    tail = head;
    Node* previous = head ;
    Node* curr = head-> next ;
    while(curr != NULL){
        Node* forward = curr-> next ;
        curr->next = previous;
        previous->next = previous2;
        previous2 =  previous;
        previous = curr;
        curr= forward;
    }
    head = previous;
    cout<<"DoublyLinked list after reversing : "<<endl;
    cout<<"head is at : "<<head-> data<<endl;
    cout<<"tail is at: "<<tail-> data <<endl;
    print(head);
}

void reverse1(Node* &head , Node* &curr , Node* &prev1 , Node* &prev2){
    if(curr== NULL){
        head = prev1 ;
        return ;
    }

    Node* forward = curr -> next;
    reverse1(head , forward , curr , prev1);
    curr->next = prev1;
    prev1->next = prev2;
}

int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    insertAttail(tail , 2);
    insertAttail(tail , 3);
    insertAttail(tail , 4);
    insertAttail(tail , 5);
    insertAttail(tail , 6);
    cout<<"head is at: "<<head-> data <<endl;
    cout<<"tail is at: "<<tail-> data <<endl;
    cout<<"doublyLinked List before reversing is : "<<endl;
    print(head);

    reverseDoublyLinkedList(head , tail);


    Node* curr = head-> next;
    Node* prev1 = head ;
    Node* prev2 = NULL;
    reverse1(head , curr , prev1 , prev2);
    cout<<"doubly linked list after reversing is : "<<endl;
    cout<<"head is at : "<<head-> data <<endl;
    print(head);

}