#include<iostream>
using namespace std;

int find_Pivot(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Pivot index is :"<<find_Pivot(arr,n)<<endl;
}