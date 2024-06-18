#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *ptr=(int *)malloc(2*sizeof(int));
    for(int i=0;i<3;i++){
        cin>>*(ptr+i);
    }
    ptr=(int *)realloc(ptr,3*sizeof(int));
    for(int i=3;i<6;i++){
        cin>>*(ptr+i);
    }
    for(int i=0;i<n;i++){
        cout<<*(ptr+i)<<endl;
    }

    return 0;
}