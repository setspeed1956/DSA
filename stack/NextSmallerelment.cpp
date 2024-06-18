#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    stack<int> s;
    s.push(-1);
    for(int i = n-1 ; i >= 0 ; i--){
        int num = arr[i];
        if( s.top() >= arr[i]){
            s.pop();
        }
        arr[i] = s.top();
        s.push(arr[i]);
    }
    return 0 ;
}