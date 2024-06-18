#include<iostream>
using namespace std;

int main(){
    int n;
    // n should not be greater than 1000
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int k=i+1;k<n;k++){
            if(arr[k]<arr[minindex]){
                minindex=k;
            }
        }
        swap(arr[minindex],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}