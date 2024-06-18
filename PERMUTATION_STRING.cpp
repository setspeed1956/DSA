#include<bits/stdc++.h>
using namespace std;
bool check_permutation(int arr[26] , int arr1[26]){
    for(int i=0 ; i<26  ; i++){
        if(arr[i]!=arr1[i]){
            return 0;
        }
    }
    return 1;
}

bool permutation_checker(string s1,string s2){
    int len=s1.length();
    int arr[26]={0};
    for(int i=0 ; i<len ; i++){
        int number=s1[i]-'a';
        arr[number]++;
    }
    for(int i=0 ; i<s2.length()-len+1 ; i++){
        int arr1[26]={0};
        for(int j=i ; j<i+len ; j++){
            int number=s2[j]-'a';
            arr1[number]++;
        }  
        if(check_permutation(arr,arr1)){
            return 1;
        }
        int number2=s2[i]-'a';
        arr1[number2]-=1;
    }
    return 0;
}

int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    int s=permutation_checker(s1,s2);
    if(s==1){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}