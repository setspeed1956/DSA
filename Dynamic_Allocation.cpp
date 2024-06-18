#include<bits/stdc++.h>
using namespace std;

int main(){
    char* ptr= new char;
    cin>>ptr;
    cout<<ptr<<endl;
    delete ptr;
    string a;
    getline(cin , a);
    cout<<a;
    return 0;
}