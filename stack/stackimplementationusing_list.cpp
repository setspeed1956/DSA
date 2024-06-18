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
            temp-> next = top;
            top = temp;
            index++;
            cout<<"element pushed successfully"<<endl;
        }
        else{
            cout<<"stack overflow"<<endl;
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
        if(top == NULL){
            return ;
        }
        while(temp != NULL){
            cout<<temp-> data <<" ";
            temp = temp-> next;
        }
        cout<<endl;
    }
};

int main(){
    Stack st(5);
    st.push(1);
    st.display();
    st.push(2);
    st.display();
    st.push(3);
    st.display();
    st.push(4);
    st.display();
    st.push(5);
    st.display();
    st.push(5);
    st.display();

    cout<<"deleted element"<<st.pop()<<endl;
    st.display();
    cout<<"deleted element"<<st.pop()<<endl;
    st.display();
    cout<<"deleted element"<<st.pop()<<endl;
    st.display();
    cout<<"deleted element"<<st.pop()<<endl;
    st.display();
    cout<<"deleted element"<<st.pop()<<endl;
    st.display();
    cout<<"deleted element"<<st.pop()<<endl;
    st.display();        
}