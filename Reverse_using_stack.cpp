#include<bits/stdc++.h>
using namespace std;

void rightplacegiver(stack<int> &st , int num){
    if((!st.empty() && st.top() < num) || st.empty()){
        st.push(num);
        return ;
    }
    int x = st.top();
    st.pop();
    rightplacegiver(st , num);
    st.push(x);
}

void sortStack(stack<int> &st){
    if(st.empty()){
        return ;
    }

    int num = st.top();
    st.pop();
    sortStack(st);
    rightplacegiver(st , num);
}

int main(){
    stack<int> st;
    int i;
    cout<<"enter the size: ";
    cin>>i;
    for(int j = 0 ; j < i ; j++){
        int number ;
        cin>>number;
        st.push(number);
    }
    sortStack(st);
    cout<<"sorted order: "<<endl;
    while(!st.empty()){
        
        cout<<st.top()<<endl;
        st.pop();
    }
}