#include<iostream>
using namespace std;
void print(int *ptr,int size){
    for(int i=0;i<size;i++){
        cout<<*(ptr+i)<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        } 
        arr[j+1]=temp;
    }
    print(arr,n);
}