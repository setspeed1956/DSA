#include<iostream>
using namespace std;

void MakeItZero(int& n){
    n=0;
}

void Compare(int& n , int a=20){
    if(n> 20){
        n=n*2;
    }
}

int main(){
    int n;
    cin>>n;
    Compare(n);
    cout<<n<<endl;
    MakeItZero(n);
    cout<<n<<endl;
    return 0;
}