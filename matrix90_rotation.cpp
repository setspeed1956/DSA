#include<bits/stdc++.h>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;
    vector<vector<int>> v(row,vector<int>(col,0));   
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>(v[i][j]);
        }
    }
    int startRow=0;
    int startcol=0;
    int endCol=col-1;
    int endRow=row-1;
    int count=0;
    int total=row*col;
    while(count<total){
        for(int i=endRow ; i>=0 ; i--){
            cout<<v[i][startcol]<<" ";
                count++;
            }
        startcol++;
        for(int i=startcol ; i<col ; i++){
            cout<<v[startRow][i]<<" ";
            count++;
        }
        startRow++;
        for(int i=startRow++ ; i<row ; i++){
            cout<<v[i][endCol]<<" ";
                count++;
            }
        endCol--;
        for(int i=endCol ; i>=0 ; i--){
            cout<<v[endRow][i]<<" ";
                count++;
            }
        endRow--;
    }
}