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

void reverse1(Node* &head , Node* &curr , Node* &prev){
    if(curr == NULL){
        head = prev;
        return ;
    }

    Node* forward = curr-> next;
    reverse1(head , forward , curr);
    curr-> next = prev;
}

void InsertAT_tail(Node* &head , Node* &tail , int d){
    
    if(head == NULL){
        cout<<"inserting digit is : "<<d<<endl;
        Node* temp =new Node (d);
        head = temp;
        tail = temp;
    }
    else{
        cout<<"inserting digit is : "<<d<<endl;
        Node* temp =new Node (d);
        tail-> next = temp;
        tail = temp;
    }
}

Node* sumof2Linkedlist(Node* &first , Node* &second){
    Node* anshead = NULL;
    Node* anstail = NULL;
    int carry = 0 ;

    while(first != NULL && second != NULL){
        int sum = first-> data + second-> data + carry;
        cout<<"sum is : "<<sum<<endl;
        int digit = sum % 10;
        cout<<"digit is: "<<digit<<endl;
        InsertAT_tail(anshead , anstail , digit);
        carry = sum / 10;
        cout<<"carry is: "<<carry<<endl;

        first = first-> next;
        second = second-> next;
    }

    while(first != NULL){
        int sum = first-> data + carry;
        cout<<"sum is : "<<sum<<endl;
        int digit = sum % 10;
        cout<<"digit is: "<<digit<<endl;
        InsertAT_tail(anshead , anstail , digit);
        carry = sum / 10;
        cout<<"carry is: "<<carry<<endl;
        first = first-> next;
    }
    while(second != NULL){
        int sum = second-> data + carry;
        cout<<"sum is : "<<sum<<endl;
        int digit = sum % 10;
        cout<<"digit is: "<<digit<<endl;
        InsertAT_tail(anshead , anstail , digit);
        carry = sum / 10;
        cout<<"carry is: "<<carry<<endl;
        second = second-> next;
    }

    while(carry != 0){
        int sum = carry;
        cout<<"sum is : "<<sum<<endl;
        int digit=sum %10;
        cout<<"digit is: "<<digit<<endl;
        InsertAT_tail(anshead , anstail , digit);
        carry = sum /10;
        cout<<"carry is: "<<carry<<endl;
    }
    Node* curr = anshead;
    Node* prev = NULL;
    reverse1(anshead , curr , prev);
    

    return anshead;
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
    Node* node1 = new Node(2);
    Node* head1 = node1;
    Node* tail1 = node1;

    insertAthead(head1 , 5);
    cout<<"linkend list 1: "<<endl;
    print(head1);

    Node* node2 = new Node(9);
    Node* head2 = node2;
    Node* tail2 = node2;

    insertAttail(tail2 , 3);
    insertAt_position(head2 , tail2 , 5 , 2);
    print(head2);

    Node* curr1 = head1;
    Node* prev1 = NULL;
    reverse1(head1 , curr1 , prev1);
    cout<<"reverse list 1 :"<<endl;
    print(head1);

    Node* curr2 = head2;
    Node* prev2 = NULL;
    reverse1(head2 , curr2 , prev2);
    cout<<"reverse list 1 :"<<endl;
    print(head2);    
  
    Node* sumof2list = sumof2Linkedlist(head1 , head2);
    print(sumof2list);

}