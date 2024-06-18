#include<bits/stdc++.h>
using namespace std;

bool parenthesis_validity_checker(string &temp){
    stack<char> taker;
    int size = temp.length();
    for(int i=0 ; i< size ; i++){
        if(temp[i]=='{' || temp[i]=='(' || temp[i]=='['){
            taker.push(temp[i]);
        }
        else{
            char closer= temp[i];
            if((taker.top()=='(' && closer==')') || (taker.top()=='{' && closer=='}') || (taker.top()=='[' && closer==']')){
                taker.pop();
            }
        }
    }
    if(taker.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string str= "";
    int n;
    cout<<"enter size: ";
    cin>>n;
    while(n--){
        char ch;
        cin>>ch;
        str.push_back(ch);
    }
    if(parenthesis_validity_checker(str)){
        cout<<"valid checker"<<endl;
    }
    else{
        cout<<"not valid checker"<<endl;
    }
    return 0;
}