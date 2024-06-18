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

void insertAt_tail(Node* & tail , int d){
    Node* temp = new Node(d);
    tail-> next = temp;
    tail = temp;
}

int  getlength(Node* &head){
    Node* temp = head;
    int cnt=0;
    while(temp!= NULL){
        cnt++;
        temp = temp-> next;
    }
    return cnt;
}

void middleprint(Node* &head ,int position){
    int cnt=1 ;
    Node* temp = head;
    while(cnt != position){
        cnt++;
        temp = temp-> next;
    }
    cout<<"middle of the list is : "<< temp->data<<endl;
}

Node* Optimisedmiddle(Node* &head){
    Node* fast = head->next;
    Node* slow = head;

    while(fast!= NULL){
        fast= fast-> next;
        if(fast!= NULL){
            fast = fast-> next;
            slow = slow-> next;
        }
        
    }
    return slow;
}

int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    insertAt_tail(tail , 2);
    insertAt_tail(tail , 3);
    insertAt_tail(tail , 4);
//    insertAt_tail(tail , 5);


    int len = getlength(head);
    cout<<"length of linked list is: "<<len<<endl;

    int mid = len/2 + 1;
    cout<<mid<<endl;
    middleprint(head , mid);

    Node* middle = Optimisedmiddle(head);

    cout<<"middle is : "<<middle-> data<<endl;
}