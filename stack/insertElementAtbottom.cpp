#include<bits/stdc++.h>
using namespace std;

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

int main(){
    stack<int> ourStack;
    int n;
    cout<<"enter the size: ";
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        int num;
        cin>>num;
        ourStack.push(num);
    }
    int element ;
    cin>> element;
    insertAtbottom(ourStack , element);
    cout<<ourStack.size()<<endl;
    while(!ourStack.empty()){
        cout<<ourStack.top()<<" ";
        ourStack.pop();
    }

}