#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if(ch>='a'&&ch<='z'){
        cout<<"lower case"<<endl;
    }
    else if(ch>='A'&&ch<='Z'){
        cout<<"upper case"<<endl;
    }
    else{
        cout<<"this is numeric"<<endl;
    }
    return 0;
}