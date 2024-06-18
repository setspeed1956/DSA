#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int data;
     Node* next;

    Node(int d){
        this-> data = d;
        this->next = NULL;
    }
};

void print(Node* &head){
    if(head == NULL){
        return ;
    }

    Node* temp = head;
    while(temp != NULL){
        cout<<temp-> data<<" ";
        temp = temp-> next;
    }
    cout<<endl;
}

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

int max_founder(Node* head){
    Node* temp = head-> next;
    int max = head-> data ;
    while(temp != NULL){
        if(max <= temp-> data){
            max = temp-> data;
            temp = temp-> next;
        }
        else{
            temp = temp-> next;
        }
    }

    return max;
}

Node* remove_duplicate(Node* &head , Node* &tail){
    map<int  , bool > mp;
    int max = max_founder(head);
    cout<<"max element is : "<<max <<endl;

    Node* curr = head ;
    Node* prev = NULL ;
    while(curr != NULL){
        if(mp[curr-> data] == false){
            mp[curr-> data] = 1;
            prev = curr;
            curr = curr-> next;
        }

        else{
            if(curr-> next == NULL){
                tail = prev;
            }
            Node* next_next = curr-> next;
            Node* temp = curr;
            delete temp;
            prev-> next = next_next;
            curr = next_next;
        }
    }

    return head;

}

int main(){
    Node* node1 = new Node(5) ;
    Node* head = node1 ;
    Node* tail = node1 ;
    print(head) ;
    cout<<"head is at : "<<head-> data<<endl ;
    cout<<"tail is at : "<<tail-> data<<endl ;

    insertAthead(head , 3);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAthead(head , 2);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAthead(head , 5);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAthead(head , 5);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAttail(tail , 3);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAttail(tail , 8);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAttail(tail , 4);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAttail(tail , 4);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAttail(tail , 4);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAttail(tail , 4);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAttail(tail , 6);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAt_position(head , tail , 4 , 1);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;

    insertAt_position(head , tail , 4 , 1);
    print(head);
    cout<<"head is : "<<head-> data<<endl;
    cout<<"tail is : "<<tail-> data<<endl;
 
    
    Node* updatedhead= remove_duplicate(head , tail) ;
    cout<<"AFTER REMOVING DUPLICATE LINKED LIST IS : "<<endl;
    print(updatedhead);
    cout<<"head is at : "<<head-> data<< endl ;
    cout<<"tail is at : "<<tail-> data<< endl ;
}