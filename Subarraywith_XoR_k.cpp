#include<bits/stdc++.h>
using namespace std;

int subarraysWithSumK(vector < int > a, int b) {
    int xr=0 ;
    map<int , int> mpp;
    mpp[xr]++;
    int cnt=0 ;
    for(int i=0 ; i<a.size() ; i++){
        xr=xr^a[i];
        int x=xr^b;
        cnt+=mpp[x];
        mpp[x]++;
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int number_check;
    cin>>number_check;
    int x=subarraysWithSumK(arr , number_check);
    cout<<x<<endl;
}