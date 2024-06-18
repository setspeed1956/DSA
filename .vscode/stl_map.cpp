#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string> m;
    m[1]="styam";
    m[4]="kumar";
    m[13]="decipline,consistency,patience";
    m[2]="emotion control";
    cout<<"before erase:"<<endl;
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }
    cout<<endl;
    m.erase(4);
    cout<<"after erase:"<<endl;
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }
    cout<<endl;
}
