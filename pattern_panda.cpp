#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1,val=1,row_1=0;
        while(col<=n){
            if(row_1<row){
                row_1++;
            }
            while(val<row_1){
                val++;
            }
            cout<<n-val+1<<" ";
            col++;
        }
        col=1;
        while(col<n){
            if(col>n-row){
                cout<<"";
            }
            else{
                cout<<n-row+1<<" ";
            }
            col++;
        }
        col=1;
        while(col<n){
            if(col<=n-row){
                cout<<"";
            }
            else{
                cout<<col+1<<" ";
            }
            col++;
        }
        cout<<endl;
        row++;
    }
    row=1;
    while(row<n){
        int col=1,val=1,row_1=0;
        while(col<=n){
            if(row_1<n-row){
                row_1++;
            }
            while(val<row_1){
                val++;
            }
            cout<<n-val+1<<" ";
            col++;
        }
        col=1;
        while(col<=row){
            cout<<row+1<<" ";
            col++;
        }
        col=1;
        while(col<n){
            if(col<=row){
                cout<<"";
            }
            else{
                cout<<col+1<<" ";
            }
            col++;
        }
        cout<<endl;
        row++;
    }
}