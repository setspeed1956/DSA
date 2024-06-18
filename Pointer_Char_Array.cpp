#include<iostream>
using namespace std;

int main(){

    char a[6]="abcde";
    cout<<a<<endl; // in cahracter array cout behaves different

    char *c=&a[0];
    cout<<c<<endl;
    //cout<<*c<<endl; it is of no use in char array

    char *c1=&a[1];
    cout<<c1<<endl;
    //cout<<*c1<<endl;

    char *c2=&a[5];
    cout<<c2<<endl;
    //scout<<*c2<<endl;


}