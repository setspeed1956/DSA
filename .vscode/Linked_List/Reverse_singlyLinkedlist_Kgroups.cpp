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

void InsertAtTail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail-> next = temp;
    tail = temp;
}

Node* Kreverse(Node* &head , int k){
    if(head == NULL){
        return NULL;
    }

    Node* next = NULL ;
    Node* curr = head ;
    Node* prev = NULL;
    int count = 0;
    while(curr!= NULL && count< k){
        next = curr-> next;
        curr-> next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next != NULL){
        head-> next = Kreverse(next , k);
    }

    return prev;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp-> data<<" ";
        temp = temp-> next;
    }
    cout<<endl;
}



int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    InsertAtTail(tail , 2);
    InsertAtTail(tail , 3);
    InsertAtTail(tail , 4);
    InsertAtTail(tail , 5);
    print(head);

    int k ;
    cin>> k;

    Node* Krev = Kreverse(head , k);
    print(Krev);

}