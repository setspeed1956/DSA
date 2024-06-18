#include<iostream>
using namespace std;

main(){
    int n;
    cin>>n;
    int i=0;
    while(i<=n){
        cout<<(i-32)*(5.0/9.0)<<endl;
        i+=1;
    }
}