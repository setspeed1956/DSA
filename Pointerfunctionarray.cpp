#include<iostream>
using namespace std;

int double_pointer(int **p){
    int x=**p;
    cout<<x+1<<endl;
    **p=**p+7;
    return **p;
}

int single_pointer(int* p){
    int x=*p;
    cout<<x+1<<endl;
    *p=*p+7;
    return *p;
}

int main(){
    int x=123;
    cout<<x<<endl;
    int *ptr=&x;
    single_pointer(ptr);
    cout<<x<<endl;
    double_pointer(&ptr);
    cout<<x<<endl;
    return 0;
}