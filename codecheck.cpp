#include<bits/stdc++.h>
using namespace std;

int main(){
  double c;
  cin>>c;
  double ans= 1;
  for(int i=1 ; i * i < c ; i++){
    ans = i;
  }

  double adder =1;
  for(int j=0 ; j< 3 ; j++){
    adder = adder / 10;
    for(double i= ans ; ans * ans < c ; i+= adder){
      ans= i;
    }
  }

  cout<<fixed<<setprecision(4)<<ans;
}