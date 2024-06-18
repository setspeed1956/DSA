#include<bits/stdc++.h>
using namespace std;

int peak_finder(int* arr , int s , int e){
    int mid= s + (e - s)/2;
    while(s< e){
        if(arr[mid]< arr[mid+1]){
            s= mid+1;
        }
        else{
            e= mid;
        }
        mid= s + (e - s)/2;
    }
    return mid;
}

int main(){
    int n;
    cin>>n;
    int* arr= new int[n];
    for(int i=0 ; i<n ; i++){
        cin>>*(arr+i);
    }
    for(int i=0 ; i<n ; i++){
        cout<<*(arr + i)<<" ";
    }
    cout<<endl;
    int ans= peak_finder(arr , 0 , n-1);
    cout<<ans<<endl;
    cout<<arr[ans]<<endl;
    delete[] arr;
}