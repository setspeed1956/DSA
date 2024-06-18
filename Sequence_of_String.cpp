#include<bits/stdc++.h>
using namespace std;

void solve(string str , string output , vector<string>& ans , int index){
    if(index>= str.length()){
        if(output.length() > 0){
            ans.push_back(output);
        }
        return ;
    }
    // Exclude
    solve(str , output , ans , index+1);

    // Include

    char element = str[index];
    output.push_back(element);
    solve(str , output , ans ,index+1);
}

vector<string> subsequence_of_string(string str){
    string output ="" ;
    vector<string> ans;
    int index=0 ;
    solve(str , output , ans , index);
    return ans;
}

int main(){
    string str;
    cin>>str;
    vector<string> ans = subsequence_of_string(str);
    for(string i : ans){
        cout<<i<<" ";
    }
}