#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        int value = this ->data ;
        while(this->next!= NULL){
            this-> next =NULL;
            delete next;
        }
        cout<<"memory is free for node with data : "<< value <<endl;
    }
};

void insertNode(Node* &tail , int element , int d){
    if(tail == NULL){
        Node* newnode = new Node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    else{
        Node* curr = tail;
        while(curr-> data != element){
            curr= curr->next;
        }
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* &tail){
    Node* temp = tail;

    if(tail == NULL){
        cout<<"LIST IS EMPTY:"<<endl;
    }
    do{
        cout<< temp->data << " ";
        temp = temp->next;
    }while(temp != tail);
    cout<<endl;
}

void deleteNode(Node* &tail , int value){
    if(tail== NULL){
        cout<<"THIS IS EMPTY CIRCULAR LINKED LIST"<<endl;
    }

    else{
        Node* prev= tail;
        Node* current= prev-> next;
        while(current-> data != value){
            prev = current;
            current = current-> next ;
        }

        if(current== prev){
            tail = NULL;
        }
        if(current== tail){
            tail=  current-> next;
        }
        
        prev->next = current-> next ;
        current-> next = NULL;
        delete current;
    }
}

int main(){
    Node* tail= NULL;

    deleteNode(tail , 2);

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

    deleteNode(tail , 22);
    print(tail);

    deleteNode(tail , 10);
    print(tail);

    deleteNode(tail , 5);
    print(tail);
    deleteNode(tail , 6);
    print(tail);
    deleteNode(tail , 7);
    print(tail);
    deleteNode(tail , 4);
    print(tail);


}