#include<bits/stdc++.h>
using namespace std;
vector<int> spiral_printer(vector<vector<int>> arr , int row , int col){
    vector<int> ans;
    int startRow=0;
    int startcol=0;
    int endRow=row-1;
    int endCol=col-1;
    int count=0;
    int total=row*col-1;
    while(count<=total){
        for(int index=startcol ; count<=total && index<=endCol ; index++){
            ans.push_back(arr[startRow][index]);
            count++;
        }
        startRow++;
        for(int index=startRow ; count<=total && index<=endRow ; index++){
            ans.push_back(arr[index][endCol]);
            count++;
        }
        endCol--;
        for(int index=endCol ; count<=total && index>=startcol ; index--){
            ans.push_back(arr[endRow][index]);
            count++;
        }
        endRow--;
        for(int index=endRow ; count<=total && index>=startRow ; index--){
            ans.push_back(arr[index][startcol]);
            count++;
        }
        startcol++;
    }
    return ans;
}

int main(){
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    int row=3,col=3;
    vector<int> spiro= spiral_printer(arr, row, col);
    for(int i : spiro){
        cout<<i<<" ";
    }
}