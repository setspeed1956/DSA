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


bool DetectLoop(Node* &head){
    if(head == NULL){
        return false;
    }

    map <Node* , bool > visiting;
    Node* temp = head;
    while(temp!= NULL){
        if(visiting[temp]== true){
            cout<<"begining of loop "<<temp->data<<endl;
            return 1;
        }
        visiting[temp]= true;
        temp= temp-> next;
    }
    return false   ;
}


int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    insertAttail(tail , 2);
    print(head);

    insertAttail(tail , 3);
    print(head);

    insertAttail(tail , 12);
    print(head); 

    insertAttail(tail , 22);
    print(head); 

    insertAttail(tail , 21);
    print(head); 
    
    tail-> next = head->next->next ;
    cout<<"tail is at "<<tail->next->data<<endl;
    cout<<"head is at "<<head->data<<endl;

    bool ans = DetectLoop(head);

    if(ans){
        cout<<"loop is present"<<endl;
    }
    else{
        cout<<"no loop is present"<<endl;
    }
   
}