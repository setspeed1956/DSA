#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr , int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans=isSorted(arr+1 , size-1);
        return ans;
    }
}

int main(){
    int n;
    cin>>n;
    int* arr= new int[n];
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        *(arr+i)=x;
    }
    bool check=isSorted(arr ,  n);
    if(check){
        cout<<"array is sorted"<<endl;
        for(int i=0 ; i<n ; i++){
            cout<<*(arr+i)<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
        for(int i=0 ; i<n ; i++){
            cout<<*(arr+i)<<" ";
        }
        cout<<endl;
    }
    delete[] arr;
}