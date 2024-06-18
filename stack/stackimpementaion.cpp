#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
     int * arr;
     int size;
     int top;
    Stack(int size){
        this-> size =size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top]= element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    int pop (){
        if(top >= 0){
            int poped_element= arr[top];
            top--;
            return poped_element;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }

    int peek(){
        if(top>= 0 && top < size){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Stack st(5);
    

    st.push(1);
    cout<<st.peek()<<endl;
    st.push(2);
    cout<<st.peek()<<endl;
    st.push(3);
    cout<<st.peek()<<endl;
    st.push(4);
    cout<<st.peek()<<endl;
    st.push(5);
    cout<<st.peek()<<endl;
    st.push(6);
    cout<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"stack is empty meredost"<<endl;
    }
    else{
        cout<<"stack is not empty meredost"<<endl;
    }
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
return 0;
}