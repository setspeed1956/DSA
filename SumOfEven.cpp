#include<iostream>  /* here we use concept of adding 2 becuse if we 
add 2 in any even number than we get the next even number*/ 
using namespace std;

main(){
    int n;
    cin>>n;
    int sum=0;
    int i=2;
    while(i<=n){
        sum+=i;
        i+=2;
    }
    cout<<sum<<endl;
}