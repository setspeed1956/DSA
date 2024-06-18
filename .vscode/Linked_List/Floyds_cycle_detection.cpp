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
void insertAttail(Node* &tail , int d){
    Node* temp = new Node(d) ;
    tail-> next = temp ;
    tail = temp ;
}
void print(Node* &head){
    Node* temp = head ;
    while(temp != NULL){
        cout<<temp-> data<<" ";
        temp = temp-> next;
    }
    cout<<endl;
}

Node* FloydsDetectLoop(Node* &head){
    if(head == NULL){
        return NULL;
    }

    Node* slow = head ;
    Node* fast = head ;

    while(slow != NULL && fast != NULL){
        fast = fast-> next;
        if(fast != NULL){
            fast = fast-> next;
        }
        slow = slow-> next;
        if(slow == fast){
            cout<<"one of the node from the loop: "<<slow-> data << endl;
            return slow;
        }
    }
    
    return NULL;
}
void removeLoop(Node* &node){
    node-> next = NULL;
    cout<<"removing of node is done successfully"<<endl;
}
Node* StartingNodeofLoop(Node* &head){
    if(head == NULL){
        return NULL;
    }

    Node* intersection = FloydsDetectLoop(head);
    Node* slow = head;
    Node* prev = NULL;
    while(slow != intersection){
        prev = intersection;
        slow = slow-> next;
        intersection = intersection-> next;
    }
    removeLoop(prev);
    return slow;
}



int main(){
    Node* node1 = new Node(1);
    Node* head = node1 ;
    Node* tail = node1 ;

    insertAttail(tail , 2);
    insertAttail(tail , 3);
    insertAttail(tail , 12);
    insertAttail(tail , 13);
    insertAttail(tail , 22);
    print(head);

    tail-> next = head-> next-> next;

    Node* ans = FloydsDetectLoop(head);
    if(ans != NULL){
        cout<<"Loop is present"<<endl;
        Node* start = StartingNodeofLoop(head);
        if(start != NULL){
            cout<<"Starting value of loop is : "<<start-> data<<endl;
        }   
    }
    else{
        cout<<"Loop is not present"<<endl;
    }
}