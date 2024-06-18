#include<iostream>
using namespace std;

void print(int *pt){
    cout<<pt<<endl;
    cout<<*pt<<endl;
}

void update(int *pt){
    pt=pt+1;
    cout<<*pt<<endl;
    cout<<pt<<endl;

}
int main(){
    int value=5;
    int *p= &value;
    print(p);
    cout<<*p<<endl;
    update(p);
}