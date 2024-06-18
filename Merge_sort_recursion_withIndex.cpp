#include<bits/stdc++.h>
using namespace std;

void merge(int* arr , int s , int e){
    vector<int> temp;
    int mid  = e + (e - s) / 2;
    int left = s;
    int right = mid + 1;
    while(left<= mid && right<= e){
        if(arr[left] < arr[right]){
            temp.push_back(arr[right]);
            left++;
        }
        else{
            temp.push_back(arr[left]);
            right++;
        }
    } 
    while(left<= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<= e){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i : temp){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i= s ; i< e ; i++){
        arr[i]= temp[i - s];
    }
}

void mergeSort(int* arr , int s , int e){
    if(s>=e){
        return ;
    }
    int mid= s + (e - s)/2;

    // this is to sort left part
    mergeSort(arr , s , mid);

    // this is to sort right part
    mergeSort(arr , mid+1 , e);

    merge(arr , s , e);
}


int main(){
    // code is for merge sort 

    int n;
    cin>>n;
    int* arr=  new int[n];
    for(int i= 0 ; i< n ; i++){
        cin>>*(arr+i);
    }
    mergeSort(arr , 0 , n-1);

    for(int i=0 ; i<n ; i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;

    delete[] arr;
}