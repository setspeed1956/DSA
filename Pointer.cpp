#include<iostream>
using namespace std;

int main(){
    int num=5;
    int *ptr= &num;  // we can't write int *pt= num because pointer not meant for storing value
    cout<<*ptr<<endl;

    *ptr=*ptr+1;
    cout<<*ptr<<endl;

    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(num)<<endl;
    cout<<sizeof(&num)<<endl;



    *ptr=*(ptr+1); // pointer store address when we add sommething like this then it goes to some other address
    cout<<*ptr<<endl;

    cout<<ptr<<endl;  // this prints address num
    cout<<&num<<endl; // by using address operater we get address assigned by symbol table
    cout<<num<<endl;
    cout<<*ptr<<endl;


    // copy of pointer

    int num2=8;
    int *pt= &num2;
    int *p1= pt;
    cout<<*pt<<endl;
    cout<<*p1<<endl;
    cout<<p1<<endl;
    cout<<&pt<<endl;
    
    *pt=*pt+1; // it updates value 8+1
    cout<<*pt<<endl;
    pt=pt+1;   // it updates address
    cout<<pt<<endl;

    return 0;
}