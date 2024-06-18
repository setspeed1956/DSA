#include<iostream>
using namespace std;
void print (int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[1000];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0 ; i<n-1 ; i++){
        bool statement=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                statement=true;
            }
            // this show how swapping is occuring at each iteration 
            print(arr , n);
        }

        cout<<endl;
        cout<<endl;
        if(statement=false){
            break;
        }
    }
    print(arr,n);
}