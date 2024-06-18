#include<iostream>
using namespace std;

main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;// print_val=row;
        while(col<=row){
            cout<<row-1+col<<" ";
            //print_val++
            col++;
        }
        cout<<endl;
        row++;
    }
}