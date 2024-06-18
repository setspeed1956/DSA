#include<bits/stdc++.h>
using namespace std;

int main(){
    int row ;
    cin>>row;
    int** arr= new int*[row];
    int sizes[]={4,1,2,3};
    for(int i=0 ; i<row ; i++){
        arr[i]= new int[sizes[i]];
    }

    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<sizes[i] ; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<sizes[i] ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0 ; i<row ; i++){
        delete[] arr[i];
    }
    delete[] arr;
}