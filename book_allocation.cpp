#include<iostream>
using namespace std;
bool Is_Possible(int book[],int siz,int mid,int student){
    int page_sum=0;
    int st_chk=1;
    for(int i=0;i<siz;i++){
        if(page_sum+book[i]<=mid){
            page_sum+=book[i];
        }
        else{
            st_chk+=1;
            if(st_chk>student || book[i]>mid){
                return false;
            }
            page_sum=book[i];
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int student;
    cin>>student;
    int book[1000];
    for(int i=0;i<n;i++){
        cin>>book[i];
    }
    int ans=-1;
    int start=0;
    int end=-1;
    for(int i=0;i<n;i++){
        end+=book[i];
    }
    int mid=start+(end-start)/2;
    while(start<=end){
        if(Is_Possible(book,n,mid,student)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    if(student>n){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}