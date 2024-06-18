#include<bits/stdc++.h>
using namespace std;
vector<int> wave_printer(vector<vector<int>> arr , int n , int m){
    vector<int> ans;
    for(int col=0 ; col<m ; col++){
        if(col&1){
            for(int row=n-1 ; row>=0 ; row--){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            for(int row=0 ; row<n ; row++){
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

int main(){
    int row , col;
    cin>>row>>col;
    vector<vector<int>> arr;
    arr={{1,2,3} , {4,5,6} , {7,8,9}};
    vector<int> k= wave_printer(arr , row , col);
    for(int i : k){
        cout<<i<<" ";
    }
}