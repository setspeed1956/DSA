#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class One_celebrity{
    private:
     bool knows(vector<vector<int>> &celeb , int a , int b){
        if(celeb[a][b] == 1){
            return true;
        }
        else{
            return false;
        }
     }
    public:
     int celebrity(vector<vector<int>> &celeb , int n){
        stack<int> s;
        for(int i = 0 ; i < n ; i++){
            s.push(i);
        }
        while(s.size() > 1){
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();

            if(knows(celeb , a , b)){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        int ans = s.top();
        int zerocount = 0;
        for(int i = 0 ; i < n ; i++){
            if(celeb[ans][i] == 0){
                zerocount++;
            }
        }
        if(zerocount != n){
            return -1;
        }

        int onecount = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(celeb[i][ans] == 1){
                onecount++;
            }
        }
        if(onecount != n - 1){
            return -1 ;
        }
        return ans;
     }
};

int main(){
    int n;
    cin>>n;
    vector<vector<int>> celebrity_matrix( n , vector<int> (n) );
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>celebrity_matrix[i][j];
        }
    }
    One_celebrity obj;
    int a = obj.celebrity(celebrity_matrix , n);
    cout<<a<<endl;
}