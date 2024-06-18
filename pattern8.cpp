#include<iostream>
using namespace std;

main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            char st='A'+n+col-row-1;
            cout<<st<<" ";
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
        while(col<=n-row){
            cout<<" ";
            col++;
        }
        col=1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }

}