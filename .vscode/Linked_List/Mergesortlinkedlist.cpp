#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int data;
     Node* next ;

    Node(int d){
        this-> data = d;
        this-> next = NULL;
    }
};
void insertAthead(Node* &head , int d){
    Node* temp = new Node(d) ;
    temp-> next = head;
    head= temp;
}

void insertAttail(Node* &tail , int d){
    Node* temp = new Node(d) ;
    tail-> next = temp ;
    tail = temp;
}

void insertAt_position(Node* &head , Node* &tail , int d , int position){
    if(position == 1){
        insertAthead(head , d);
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
            insertAttail(tail , d);
            return ;
        }
        Node* NodeToInsert = new Node(d);
        NodeToInsert-> next = temp-> next;
        temp-> next = NodeToInsert;
    }
}

void print(Node* &head ){
    if(head == NULL){
        cout<<"list is empty"<<endl;
    }
    else{
        Node* temp = head ;
        while(temp != NULL){
            cout<<temp-> data<<" ";
            temp = temp-> next;
        }
    }
}

Node* findMiddle(Node* head){
    Node* slow = head;
    Node* fast = head-> next;
    while(fast != NULL && fast-> next != NULL){
        fast = fast-> next-> next;
        slow = slow -> next;
    }
    return slow;
}

Node* merge(Node* left ,Node* right){
    if(left == NULL){
        return right;
    }
    if(right == NULL){
        return left;
    }

    Node* ans = new Node(-1);
    Node* temp = ans;
    while(left != NULL && right != NULL){
        if(left -> data < right-> data){
            temp-> next = left ;
            temp = left ;
            left = left -> next;
        }
        else{
            temp-> next = right;
            temp = right ;
            right = right-> next;
        }
    }
    cout<<"fi"<<endl;
    while(left != NULL){
        temp-> next = left;
        temp = left;
        left = left -> next;
    }
    cout<<"ki"<<endl;
    while(right != NULL){
        temp-> next = right;
        temp = right;
        right = right-> next;
    }

    cout<<"yi"<<endl;
    ans= ans-> next;
    return ans;
}

Node* mergeSort(Node* head){
    // base case
    if(head == NULL && head-> next == NULL){
        return head;
    }

    // break linked list into two parts
    Node* mid = findMiddle(head);
    Node* left = head;
    Node* right = mid-> next;
    mid-> next = NULL;

    // recursive calls to sort both halves
    left = mergeSort(left);
    cout<<"wi"<<endl;
    right = mergeSort(right);
    cout<<"ei"<<endl;

    //merge both left and right halves

    Node* result = merge(left , right);
    cout<<"gi"<<endl;
    return result;

}

int main(){
    Node* node1 = new Node(5);
    Node* head = node1 ;
    Node* tail = node1 ;

    insertAttail(tail , 4);
    insertAttail(tail , 3);
    insertAttail(tail , 2);
    insertAttail(tail , 1);
    print(head);

    Node* answer = mergeSort(head);
    print(answer);
}
