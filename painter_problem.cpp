#include<iostream>
using namespace std;
bool Is_Possible(int *ptr1,int size,int mid,int k){
    int count_timer=0;
    int w=k;
    int k1=1;
    for(int i=0;i<size;i++){
        if(count_timer+*(ptr1+i)<=mid){
            count_timer+=*(ptr1+i);
        }
        else{
            k1+=1;
            if(k1>w || *(ptr1+i)>mid){
                return false;
            }
            count_timer=*(ptr1+i);
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int *ptr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        cin>>*(ptr+i);
    }
    int k;
    cin>>k;
    int start=0;
    int end=0;
    for(int i=0;i<n;i++){
        end+=*(ptr+i);
    }
    
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(Is_Possible(ptr,n,mid,k)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        
        mid=start+(end-start)/2;
    }
    if(k>n){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}