#include<iostream>
using namespace std;

int set_bit_count(int n){
    int count =0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int count=set_bit_count(n);
    if(count==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}