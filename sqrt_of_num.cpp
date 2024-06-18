#include<iostream>
using namespace std;

int squrinteger_part(int n){
    int s=0;
    int e=37;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<e){
        int square=mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;    
}
double precision(int num,int upto_decimal,int intg_part){
    int precisn=upto_decimal;
    double fact=1;
    double ans=intg_part;
    for(int i=0;i<precisn;i++){
        fact=fact/10;
        for(double j=intg_part;j*j<num;j=j+fact){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int num_1=squrinteger_part(n);
    cout<<"integer part of sqaure:"<<num_1<<endl;
    cout<<"your answer with decimal point is  :"<<precision(n,3,num_1)<<endl;
}