#include<bits/stdc++.h>
using namespace std;

void deleting_mid(stack<int> &temp , int size , int index){
    if(index== size/2){
        int data = temp.top();
        cout<<"deleted element is : "<<data<<endl;
        temp.pop();
        return ;
    }

    int element = temp.top();
    temp.pop();
    deleting_mid(temp , size , index+1);
    temp.push(element);
}

int main(){
    stack<int> temp;
    int n;
    cout<<"enter the size of the stack: ";
    cin>>n;
    while(n--){
        int i;
        cout<<"enter element to insert: ";
        cin>>i;
        temp.push(i);
    }
    int size= temp.size();
    cout<<"size is : "<<size<<endl;
    deleting_mid(temp , size  , 0);
    cout<<"now size is : "<<temp.size()<<endl;
}