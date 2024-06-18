#include<bits/stdc++.h>
using namespace std;

int fact_calculator(int num){
    int ans=1;
    for(int i=num ; i>1 ; i--){
        ans*=i;
    }
    return ans;
}

int main(){
    int x=fact_calculator(-1);
    cout<<x<<endl;
    x=fact_calculator(0);
    cout<<x<<endl;
    x=fact_calculator(1);
    cout<<x<<endl;
    x=fact_calculator(2);
    cout<<x<<endl;
    x=fact_calculator(3);
    cout<<x<<endl;
    x=fact_calculator(4);
    cout<<x<<endl;
}