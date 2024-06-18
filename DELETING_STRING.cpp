#include<iostream>
using namespace std;

int main(){
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    while(s2.length()!=0 && s2.find(s1)<s2.length()){
        s2.erase(s2.find(s1) , s1.length());
    }
    cout<<s2<<endl;
}