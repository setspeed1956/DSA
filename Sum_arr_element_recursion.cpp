#include<bits/stdc++.h>
using namespace std;

int array_sum_cal(int *arr , int size){
    if(size== 1){
        return arr[0];
    }
    else{
        return arr[0] + array_sum_cal(arr+1 , size-1);
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
    int sum= array_sum_cal(arr , n);
    cout<<sum<<endl;
    delete[] arr;
}