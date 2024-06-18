#include<iostream>
using namespace std;

main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n+1-row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
    cout<<endl;
    row=1;
    while(row<=n){
        int col=1;
        while(col<row){
            cout<<" ";
            col++;
        }
        col=1;
        while(col<=n-row+1){
            cout<<'*';
            col++;
        }
        cout<<endl;
        row++;
    }
}