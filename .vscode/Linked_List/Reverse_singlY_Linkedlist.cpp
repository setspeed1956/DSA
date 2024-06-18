#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int data;
     Node* next;

    Node(int d){
        this->data = d;
        this-> next = NULL;
    }
};

void insertAttail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail-> next = temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp = head ;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


void reverseLinkedList(Node* &head , Node* &tail){
    tail = head;
    Node* curr = head;
    Node* prev = NULL;
    while(curr != NULL){
        Node* forward = curr-> next;
        curr-> next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;

    cout<<"Linked list after reversing is :"<<endl;
    cout<<"head is at : "<<head-> data << endl;
    cout<<"tail is at : "<<tail-> data << endl;
    print(head);
}

void reverse1(Node* &head , Node* &curr , Node* &prev){
    if(curr == NULL){
        head = prev;
        return ;
    }

    Node* forward = curr-> next;
    reverse1(head , forward , curr);
    curr-> next = prev;
}

Node* reverse2(Node* head){
    if(head == NULL || head-> next == NULL){
        return head ;
    }

    Node* newHead = reverse2(head-> next);
    head-> next -> next = head;
    head-> next = NULL;
    
    return newHead;
}


int main(){
    Node* node1= new Node(4);
    Node* head = node1;
    Node* tail = node1;

    insertAttail(tail , 2);
    /*insertAttail(tail , 3);
    insertAttail(tail , 4);
    insertAttail(tail , 5);
    insertAttail(tail , 6);*/
    cout<<"Linked list before reversing is :"<<endl;
    print(head);
    cout<<"head is at :"<<head-> data <<endl;
    cout<<"head is at : "<<tail-> data << endl;

    reverseLinkedList(head , tail);


    Node* prev= NULL;
    Node* curr = head;
    reverse1(head , curr , prev);
    cout<<"Linked list after reversing is : "<<endl;
    print(head);

    cout<<"linked list after reverse2 function is : "<<endl;
    Node* reverser = reverse2(head);
    print(reverser);
}