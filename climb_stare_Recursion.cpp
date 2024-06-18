#include<bits/stdc++.h>
using namespace std;

int ways_to_reach(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    return ways_to_reach(n-1) + ways_to_reach(n-2);
}

int main(){
    int n;
    cin>>n;
    int ways = ways_to_reach(n);
    cout<<ways<<endl;
}