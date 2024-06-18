#include<iostream>
using namespace std;

main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<char('A'+row-1)<<" ";
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
        while(col<=row){
            char start='A'+row+col-2;
            cout<<start<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }

}