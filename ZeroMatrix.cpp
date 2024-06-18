#include<iostream>
using namespace std;

void matrixZero(int matrix[][5], int row , int col){
    for(int i= 0 ; i<row ; i++){
        matrix[i][row]=0;
    }
    for(int i=0 ; i<col ; i++){
        matrix[row][i]=0;
    }

}
int main(){
    int arr[5][5]={{1,2,3,4,0},{1,0,2,3,5},{1,2,3,8,8},{0,1,2,3,4},{6,7,8,9,3}};
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            if(arr[i][j]==0){
                cout<<i<<" "<<j<<endl;
                /*for(int k=0 ; k<5 ; k++){
                    arr[k][j]=0;
                }
                for(int k=0 ; k<5 ; k++){
                    arr[i][k]=0;
                }*/          
            }
        }
    }
    /*for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/
}