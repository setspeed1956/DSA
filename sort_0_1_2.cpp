#include<iostream>
using namespace std;

void Sorter_0_1_2(int arr[],int n){
    int start=0,end=n-1;
    while(start<end){
        if(arr[start]==0){
            start++;
        }
        else if(arr[end]==2||arr[end]==1){
            end--;
        }
        else{
        swap(arr[start],arr[end]);
        start++;
        end--;
        }    
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    start=0,end=n-1;
    while(start<end){
        if(arr[start]==0||arr[start]==1){
            start++;
        }
        else if(arr[end]==2){
            end--;
        }
        else{
            swap(arr[start],arr[end]);
            start++;
            end--;

        }            
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}
int main(){
    int arr[1000]={0};
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Sorter_0_1_2(arr,n);
}