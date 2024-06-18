#include<bits/stdc++.h>
using namespace std;

void Saydigit(int numb, string arr[]){ 
    if(numb==0){
        return ;
    } 
    int digit= numb%10;
    numb= numb/10;
    Saydigit(numb , arr);  
    cout<<arr[digit]<<" ";
}

int main(){
    int Your_Number;
    cin>>Your_Number;
    string number_1[10]={"zero","one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"};
    Saydigit(Your_Number , number_1);
}