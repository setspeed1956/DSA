#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,2,3,4,5,6};
    cout<<arr<<endl; // gives address
    cout<<arr[0]<<endl;

    int *pt= &arr[0]; // we cannot write *pt= &arr it gives error 
    cout<<pt<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<*pt<<endl;

    *pt=*pt+6;
    cout<<*pt<<endl;
    *pt=*pt-6;
    cout<<*pt<<endl;

    *pt=*(pt+1);
    cout<<*pt<<endl;

    pt=pt+1;
    cout<<*pt<<endl;

    cout<<2[arr]<<endl; // it means *(arr+2)

    // here we talk about size

    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr[0])<<endl;
    cout<<sizeof(pt)<<endl;
    cout<<sizeof(*pt)<<endl;
}