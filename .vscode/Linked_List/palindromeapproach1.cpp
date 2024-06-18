#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
     int data;
     Node* next;
     Node(int d){
        this-> data = d ;
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

void print(Node* &head){
    if(head == NULL){
        return ;
    }

    else{
        Node* temp = head;
        while(temp != NULL){
            cout<<temp-> data <<" ";
            temp = temp-> next;
        }    
        cout<<endl;
    }
}

vector<int> list_to_array_converter(Node* &head){
    vector<int> arroflinkedList;
    Node* temp = head;
    while(temp != NULL){
        arroflinkedList.push_back(temp-> data);
        temp = temp-> next;
    }
    for(int i : arroflinkedList){
        cout<<i<<" ";
    }
    cout<<endl;
    return arroflinkedList;
}

bool approach1(vector<int>& arr){
    int n= arr.size();
    int start = 0;
    int end = n - 1;
    while(start <= end){
        if(arr[start] != arr[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

Node* middlefounder(Node* &head){
    Node* slow = head;
    Node* fast = head-> next;

    while(fast!= NULL){
        fast= fast-> next;
        if(fast!= NULL){
            fast = fast-> next;
            slow = slow-> next;
        }
        
    }
    return slow;
}
Node* reversed_from_middle(Node* &middle){
    Node* temp = middle->next;
    Node* prev= NULL;

    while(temp != NULL){
        Node* forward = temp-> next;
        temp->next= prev;
        prev = temp;
        temp = forward;
    }
    return prev;
}

bool approach2(Node* &head){
    Node* middlenode = middlefounder(head);
    middlenode-> next = reversed_from_middle(middlenode);
    Node* head1 = head;
    Node* head2 = middlenode-> next;
    while(head2 != NULL){
        if(head1-> data != head2-> data){
            return false;
        }
        head1 = head1-> next;
        head2 = head2-> next;
    }
    return true;
}

int main(){
    Node* node1 = new Node(3);
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAthead(head , 2);
    print(head);

    insertAthead(head , 1);
    print(head);

    insertAttail(tail , 3);
    print(head);

    insertAttail(tail , 2);
    print(head);

    insertAt_position(head , tail , 1 , 6);
    print(head);

    insertAt_position(head , tail , 4 , 4);
    print(head);

    vector<int> listToarray = list_to_array_converter(head);

    if(approach1(listToarray)){
        cout<<"list is palindrome"<<endl ;
    }
    else{
        cout<<"list is not palindrome"<<endl ;
    }

    if(approach2(head)){
        cout<<"list is palindrome"<<endl ;
    } 
    else{
        cout<<"list is not palindrome"<<endl;
    }


}