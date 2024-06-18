#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int m=n;
    int i=0,ans=0;
    while(m!=0){
        int bit=m&1;
        ans=bit*pow(10,i)+ans;
        m=m>>1;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}