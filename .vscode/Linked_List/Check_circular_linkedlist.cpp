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

void insertNode(Node* &tail , int element , int d){
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode-> next = newNode;
    }
    else{
        Node* curr = tail;
        while(curr-> data != element){
            curr= curr->next;
        }
        Node* temp = new Node(d);
        temp-> next = curr-> next;
        curr->next = temp;
    }
}

void print(Node* &tail){
    Node* temp = tail;
    if(tail == NULL){
        cout<<"empty"<<endl;
    }

    do{
        cout<<temp->data<<" ";
        temp= temp-> next ;
    }while(temp != tail);
    cout<<endl;
}

bool checkcircular_linkedlist(Node* &tail){
    Node* temp = tail-> next;
    while(temp != NULL && temp != tail){
        temp= temp-> next;
    }
    if(temp== NULL){
        return false;
    }
    if(temp == tail){
        return true;
    }
}

int main(){
    Node* tail = NULL;

    insertNode(tail , 2 , 4);
    print(tail);

    
    insertNode(tail , 4 , 5);
    print(tail);

    insertNode(tail , 4 , 6);
    print(tail);

    insertNode(tail , 4 , 7);
    print(tail);

    insertNode(tail , 5 , 10);
    print(tail);

    insertNode(tail , 10 , 22);
    print(tail);


   bool ans = checkcircular_linkedlist(tail);
   if(ans){
    cout<<"it is circular linked list"<<endl;
   }
   else{
    cout<<"it is not cicular linked list"<<endl;
   }
}