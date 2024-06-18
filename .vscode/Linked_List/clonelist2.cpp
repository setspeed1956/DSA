#include<bits/stdc++.h>
using  namespace std;

class Node{
    public:
     int data;
     Node* next;
     Node* random;

    Node(int d){
        this-> data = d;
        this-> next = NULL;
        this-> random = NULL;
    }
};

void insertAthead(Node* &head , Node* &tail , int d){
    Node* temp = new Node(d) ;

    if(head == NULL){
        head = temp ;
        tail = temp ;
    }

    else{
        tail -> next = temp;
        tail = temp ;
    }
}

void insertAt_position(Node* &head , Node* &tail , int d , int position){
    if(position == 1){
        insertAthead(head , tail , d);
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
            insertAthead(head ,tail , d);
            return ;
        }
        Node* NodeToInsert = new Node(d);
        NodeToInsert-> next = temp-> next;
        temp-> next = NodeToInsert;
    }
}

void random(Node* &head , Node* &tail){
    Node* temp = head;
    Node* curr = head;

    temp-> random = curr->next -> next ;
    cout<<"random of first node is pointing to : "<<temp-> random -> data<<endl;

    temp = temp -> next ;

    temp -> random = curr;
    cout<<"random of second node is pointing to : "<<temp-> random -> data<<endl;

    temp = temp -> next ;

    temp-> random = curr -> next -> next -> next -> next;
    cout<<"random of third node is pointing to : "<<temp-> random -> data<<endl;

    temp = temp -> next ;

    temp-> random = curr -> next -> next ;
    cout<<"random of fourth node is pointing to : "<<temp-> random -> data<<endl;

    temp = temp -> next ;

    temp-> random = curr -> next ;
    cout<<"random of fifth node is pointing to : "<<temp-> random -> data<<endl;

}

void clonestage1maker(Node* &head , Node* &tail , Node* &clonehead1 , Node* &clonetail1 , map<Node* , Node* > &mp){
    Node* temp = head;
    while(temp != NULL){
        if(clonehead1 == NULL){
            clonehead1 = temp ;
            clonetail1 = temp ;
            mp[temp]=clonetail1;
            temp = temp -> next;
        }

        else{
            clonetail1 -> next = temp;
            clonetail1 = temp ;
            mp[temp]=clonetail1;
            temp = temp -> next;
        }
    }
}
void clonefinalstagemaker(Node* &head , Node* &tail , Node* &clonehead , Node* &clonetail , map<Node* , Node*> &mp){
    Node* clonetemp = clonehead;
    Node* temp = head;
    while(clonetemp != NULL){
        clonetemp-> random = mp[temp-> random];
        clonetemp = clonetemp-> next;
        temp = temp-> next;
    }
    clonetemp = clonehead;

    cout<<"random of first clone node is pointing to : "<<clonetemp-> random -> data<<endl;
    clonetemp = clonetemp-> next;

    cout<<"random of second clone node is pointing to : "<<clonetemp-> random -> data<<endl;
    clonetemp = clonetemp-> next;

    cout<<"random of third clone node is pointing to : "<<clonetemp-> random -> data<<endl;
    clonetemp = clonetemp-> next;

    cout<<"random of fourth clone node is pointing to : "<<clonetemp-> random -> data<<endl;
    clonetemp = clonetemp-> next;

    cout<<"random of fifth clone node is pointing to : "<<clonetemp-> random -> data<<endl;
}

void print(Node* &head){
    if(head == NULL){
        return ;
    }
    else{
        Node* temp = head ;
        while(temp != NULL){
            cout<<temp-> data<<" ";
            temp = temp-> next;
        }
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(1);
    Node* head = node1 ;
    Node* tail = node1 ;

    print(head);

    insertAt_position(head , tail , 2 , 2);
    print(head);
    
    insertAt_position(head , tail , 3 , 3);
    print(head);

    insertAt_position(head , tail , 4 , 4);
    print(head);

    insertAt_position(head , tail , 5 , 5);
    print(head); 

    random(head , tail );     


    // now here we start cloning by approach 1 where we use two loops

    cout<<"the clone linked list where we have done linking of next only : "<<endl; 

    Node* clonehead = NULL;
    Node* clonetail = NULL;

    map<Node* , Node*> mp;
    clonestage1maker(head , tail , clonehead , clonetail , mp);
    print(clonehead);

    cout<<"the clone linked list where we have done linking of random and this is final : "<<endl;
    clonefinalstagemaker(head , tail , clonehead , clonetail , mp);

    print(clonehead);
    cout<<"the head of the clone is at : "<<clonehead-> data<<endl;
    cout<<"the tail of the clone is at : "<<clonetail-> data<<endl;
    
}