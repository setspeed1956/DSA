#include<iostream>
using namespace std;

main(){
    int n;
    cin>>n;
    int row=1;
    char star='A';
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<star<<" ";
            star++;
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
        
        while(col<=n){
            char start='A'+row+col-2;
            cout<<start<<" ";
            col++;    
        }
        cout<<endl;
        row++;

    }
}