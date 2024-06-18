#include<iostream>
using namespace std;

main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n-row+1){
            cout<<col<<" ";
            col++;
        }
        col=1;
        while(col<row){
            cout<<'*'<<" ";
            col++;
        }
        col=1;
        while(col<row){
             cout<<'*'<<" ";
             col++;
        }
        col=1;
        while(col<=n+1-row){
            cout<<n-col+1<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}