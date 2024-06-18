#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    string temp;
    for(int i=0 ; i<str.length() ; i++){
        if(str[i]==' '){
            str[i]='@';
        }
    }
    cout<<str<<endl;
}