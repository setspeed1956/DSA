#include<bits/stdc++.h>
using namespace std;

int fibonnacci_series(int n){
    if(n<0){
        return 0;
    }
    if(n==1 || n==0){
        return 1;
    }
    return fibonnacci_series(n-1) + fibonnacci_series(n-2);
}

int main(){
    int n;
    cin>>n;
    int ans= fibonnacci_series(n);
    cout<<endl;
    cout<<ans<<endl;
}