#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> Merge_Overlap(vector<vector<int>> arr){
    vector<vector<int>> ans1;
    for(int i=0 ; i<ans1.size() ; i++){
        vector<int> temp;
        int index;
        for(int j=i+1 ; j<ans1.size() ; j++){
            if(arr[i][1]>= arr[j][0]){
                index=j;
            }
        }
        temp.push_back(arr[i][0]);
        temp.push_back(arr[index][1]);
        ans1.push_back(temp.begin() , temp.end());
    }
    return ans1;
}

int main(){
    int row;
    cin>>row;
    int col;
    cin>>col;
    vector<vector<int>> arr(row , vector<int> (2));
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<2 ; j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>> ans=Merge_Overlap( arr );
    for(int i=0 ; i<ans.size() ; i++){
        for(int j=0 ; j<2 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}