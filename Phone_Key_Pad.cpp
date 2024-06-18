#include<bits/stdc++.h>
using namespace std;

void solve(string digit , string output , vector<string>& ans , int index , string map[]){
    if(index >= digit.length()){
        ans.push_back(output);
        return ;
    }

    int number = digit[index] - '0';
    string value= map[number];
    for(int i= 0 ; i<value.length() ; i++){
        output.push_back(value[i]);
        solve(digit ,output ,ans , index + 1 , map);
        output.pop_back();
    }

}

vector<string> phone_keypad(string digit , string map[]){
    string output="" ;
    vector<string> ans ;
    int index=0 ;
    solve(digit , output , ans , index , map);
    return ans; 
}
int main(){
    string digit;
    cin>>digit;
    string map[10]={" " ,  " " ,"abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};
    vector<string> ans = phone_keypad(digit , map);
    for(string i : ans){
        cout<<i<<" ";
    }
    return  0;
}
