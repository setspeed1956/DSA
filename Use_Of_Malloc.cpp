#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *ptr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        cin>>*(ptr+i);
    }
    for(int i=0;i<n;i++){
        cout<<*(ptr+i)<<endl;
    }
    return 0;
}
