#include<bits/stdc++.h>
using namespace std;

void sorted_uniarray(int arr1[] , int arr2[] , int size1 , int size2){
    int arr3[size1 + size2];
    int left=0 , right=0;
    int index=0;
    while(left< size1 && right< size2){
        if(arr1[left]<= arr2[right]){
            arr3[index]= arr1[left];
            index++;
            left++;
        }
        else{
            arr3[index]= arr2[right];
            index++;
            right++;
        }
    }
    while(left< size1){
        arr3[index]= arr1[left];
        left++;
        index++;
    }
    while(right< size2){
        arr3[index]= arr2[right];
        right++;
        index++;
    }
    for(int i=0 ; i< size1 + size2 ; i++){
        if(i< size1){
            arr1[i-size1]= arr3[i];
        }
        else{
            arr2[i]= arr3[i];
        }
    }
}

int main(){
    int arr1[4]={1 , 3 , 4 , 6};
    int arr2[3]={1 , 2 , 5};
    sorted_uniarray(arr1 , arr2 , 4 , 3);
    for(int i : arr1){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i : arr2){
        cout<<i<<" ";
    }
    cout<<endl;
}