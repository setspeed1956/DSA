#include<bits/stdc++.h>
using namespace std;

bool linear_search(int* arr , int size ,int key){
    if(size== 0){
        return false;
    }
    if(arr[0]== key){
        return true; 
    }
    else{
        return linear_search(arr + 1 , size - 1 , key);
    }

}

int linear_search1(int* arr , int size ,int key){
    if(size== 0){
        return -1;
    }
    if(arr[0]== key){
        return size; 
    }
    else{
        return linear_search1(arr + 1 , size - 1 , key);
    }

}

int main(){
    int n;
    cin>>n;
    int* arr= new int[n];
    for(int i=0 ; i<n ; i++){
        cin>>*(arr + i);
    }
    int key;
    cin>>key;
    bool ans= linear_search(arr , n , key);
    if(ans){
        cout<<"element FOUND"<<endl;
    }
    else{
        cout<<"NOT FOUND"<<endl;
    }
    int ans1= linear_search1(arr , n , key);
    if(ans1== -1){
        cout<<ans1<<endl;
    }
    else{
        cout<<n - ans1<<endl;
    }
    delete[] arr;
    return 0;
}