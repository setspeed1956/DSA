#include<iostream>
using namespace std;
string duplicate_remover(string s){
    for(int i=0 ; i<s.length()-1 ; i++){
        if(s[i]==s[i+1]){
            s.erase(i,i+1);
            return duplicate_remover(s);
        }
    }
    return s;
}

int main(){
    string s;
    cin>>s;
    string s1=duplicate_remover(s);
    cout<<s1<<" ";
}