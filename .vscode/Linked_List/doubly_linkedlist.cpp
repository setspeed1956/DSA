#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
      int data;
      Node* previous;
      Node* next;

    Node(int data){
        this-> data = data;
        this-> next = NULL;
        this-> previous = NULL;
    }

    ~Node(){
        int value= this-> data;
        while(this-> next != NULL){
           this->next = NULL;
            delete next;
        }
        cout<<"memory is free for node with data : "<< value <<endl;
    }
};

void InsertAtHead(Node* &head , int d){
    Node* temp= new Node(d);
    temp->next = head;
    head->previous = temp;
    head = temp;
}

void InsertAtTail(Node* &tail , int d){
    Node* temp= new Node(d);
    tail->next = temp;
    temp->previous = tail;
    tail = temp;
}

void InsertAtPosition(Node* &head , Node* &tail , int d , int position){
    if(position == 1){
        InsertAtHead(head , d);
        return ;
    }
    int cnt = 1;
    Node* current = head;
    Node* before= NULL;
    while(cnt<position){
        before = current;
        if(current->next == NULL){
        InsertAtTail(tail , d);
        return ;
        }
        current= current->next;
        cnt++;
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next= current;
    current->previous= nodetoinsert;
    before->next= nodetoinsert;
    nodetoinsert->previous = before;

}

int getlength(Node* head){
    int len=0 ;
    Node* temp = head ;
    while(temp != NULL){
        len++;
        temp = temp->next ;
    }
    return len;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

void DeleteAtPosition(Node* &tail ,Node* &head , int position){
    if(position == 1){
        Node* temp = head;
        head = head->next ;
        delete temp;
    }

    else{
        int cnt = 1 ;
        Node* current = head;
        Node* before = NULL;
        while(cnt < position){
            before = current;
            current = current->next ;
            cnt++;
            if(current-> next == NULL && cnt < position){
                cout<<"YOU ARE TRYING TO DELETE NON EXISTING POSITION"<<endl;
                return ;
            }
        }
        if(current->next == NULL){
            before->next = NULL;
            tail= current->previous;
            delete current;
            return ;
        }
        before->next = current-> next;
        delete current ;
    }
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    InsertAtHead(head , 11);
    InsertAtHead(head , 12);
    InsertAtHead(head , 13);
    print(head);

    InsertAtTail(tail , 21);
    InsertAtTail(tail , 22);
    InsertAtTail(tail , 23);
    print(head);
    cout<<"data at head is : "<<head->data<<endl;
    cout<<"data at tail is : "<<tail->data<<endl;

    InsertAtPosition(head , tail , 100 , 4);
    print(head);
    cout<<"data at head is : "<<head->data<<endl;
    cout<<"data at tail is : "<<tail->data<<endl;

    InsertAtPosition(head , tail , 50 , 1);
    print(head);
    cout<<"data at head is : "<<head->data<<endl;
    cout<<"data at tail is : "<<tail->data<<endl;

    InsertAtPosition(head , tail , 500 , 10);
    print(head);
    cout<<"data at head is : "<<head->data<<endl;
    cout<<"data at tail is : "<<tail->data<<endl;

    DeleteAtPosition(tail , head , 1);
    print(head);
    cout<<"data at head is : "<<head-> data <<endl;
    cout<<"data at tail is : "<<tail->data << endl;

    DeleteAtPosition(tail , head , 4);
    print(head);
    cout<<"data at head is : "<<head-> data <<endl;
    cout<<"data at tail is : "<<tail->data << endl;

    DeleteAtPosition(tail , head , 8);
    print(head);
    cout<<"data at head is : "<<head-> data <<endl;
    cout<<"data at tail is : "<<tail->data << endl;
    
    DeleteAtPosition(tail , head , 8);
    print(head);
    cout<<"data at head is : "<<head-> data <<endl;
    cout<<"data at tail is : "<<tail->data << endl;

    int len = getlength(head);
    cout<<"LENGTH IS : "<<len;
}
