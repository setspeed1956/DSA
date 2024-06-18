#include<bits/stdc++.h>
using namespace std;

void triplet(vector<int> arr , int n){
    for(int i=0 ; i<n ; i++){
        int sum=arr[i];
        for(int j=i+1 ; j<n ; j++){
            int sum1=arr[j];
            for(int k=j+1 ; k<n ; k++){
                if(sum+sum1+arr[k]==0){
                    cout<<arr[i]<<' '<<arr[j]<<' '<<arr[k]<<endl;
                }
            }
        }
    }

}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    triplet(arr , n);
    return 0 ;
}