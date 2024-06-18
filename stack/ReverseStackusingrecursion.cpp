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

class Stack{
    public:
     Node* top;
     int size;
     int index;

    Stack(int size){
        top = NULL;
        this-> size = size;
        this-> index = -1;
    }

    void push(int element){
        if(size - index > 1){
            Node* temp = new Node(element);
            temp -> next = top;
            top = temp;
            index++;
        }
        else{
            cout<<"stack overflow "<<endl;
        }
    }
    int pop(){
        if(index>= 0){
            index--;  
            Node* removingNode = top;
            int data = removingNode-> data;
            top = top-> next;
            delete removingNode;
            return data;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }

    void display(){
        Node* temp = top;
        while(temp != NULL){
            cout<<temp-> data <<" ";
            temp = temp-> next;
        }
        cout<<endl;
    }
};

void insertAtbottom(stack<int> &st , int element){
    if(st.empty()){
        st.push(element);
        return ;
    }

    int num = st.top();
    st.pop();
    insertAtbottom(st , element);
    st.push(num);
}

void reverseStack(stack<int> &st){
    if(st.empty()){
        return ;
    }

    int num = st.top();
    st.pop();
    reverseStack(st);
    insertAtbottom(st , num);
}

int main(){
    stack<int> st;
    st.push(3);
    
    st.push(4);
    
    st.push(7);
    
    st.push(9);
    stack<int> st1 = st;
    while(!st1.empty()){
        cout<<st1.top()<<" ";
        st1.pop();
    }
    cout<<endl;
    reverseStack(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
}