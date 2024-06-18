#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> nums , vector<int> output , int index , vector<vector<int>>& ans){
    // base case
        if(output.size()>0){
        ans.push_back(output);
        return ;
    }

    // exclude
    solve(nums , output , index + 1 , ans);

    //include
    int element = nums[index];
    output.push_back(element);
    solve(nums , output , index + 1 , ans);

}


vector<vector<int>> subset(vector<int>& nums){
    vector<int> output;
    vector<vector<int>> ans;
    int index = 0;
    solve(nums , output , index , ans);
    return ans; 
}

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i= 0 ; i< n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    vector<vector<int>> ans = subset(nums);
    for(int i= 0 ; i< ans.size() ; i++){
        cout<<"{ ";
        for(int j= 0 ; j< ans[i].size() ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"} ";
    }
}