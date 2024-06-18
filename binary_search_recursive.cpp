#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr , int s , int e , int key){
    if(s > e){
        return -1;
    }
    int mid= s + (e -s ) / 2;
    if(arr[mid]== key){
        return mid;
    }

    if(arr[mid]< key){
        
        binarySearch(arr , mid + 1 , e , key);
    }
    else{
        binarySearch(arr , s , mid - 1 , key);
    }

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
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
    int key ;
    cin>>key ;
    int result = binarySearch(arr , 0 , n -1   , key);
    if(result == -1){
        cout<<"Element is not present"<<endl;
    }
    else{
        cout<<result<< endl;
    }
}