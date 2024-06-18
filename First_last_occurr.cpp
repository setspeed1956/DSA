#include<bits/stdc++.h>
using namespace std;

int last_occurrence(int arr[],int size,int key){
    int start=0,end=size-1,ans=-1;
    int mid=start+(end -start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int first_occurrence(int arr[],int size,int key){
    int start=0,end=size-1,ans=-1;
    int mid=start+(end -start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int key;
        cin>>key;
        int arr[1000];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int l=last_occurrence(arr,n,key);
        int f=first_occurrence(arr,n,key);
        cout<<f<<" "<<l;
    }
}