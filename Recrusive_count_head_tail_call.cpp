#include<bits/stdc++.h>
using namespace std;
//when we do tail call

void print_1(int n){
    if(n== 0){
        return ;
    }
    cout<<n<<" ";
    print_1(n-1);
}

void print_2(int n){
    if(n== 0){
        return ;
    }
    print_2(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    cout<<"output when we do tail recursion"<<endl;
    print_1(n);
    cout<<endl;
    cout<<"output when we do head recursion"<<endl;
    print_2(n);
    return 0;
}