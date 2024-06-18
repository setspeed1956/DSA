#include<bits/stdc++.h>
using namespace std;


int partition(int* arr , int s , int e){
    int pivot= arr[s];
    int cnt=0 ;
    for(int i = s + 1 ; i<= e ; i++){
        if(arr[i]<= pivot){
            cnt+=1;
        }
    }

    int pivotIndex= s + cnt;
    swap(arr[pivotIndex] , arr[s]);
    int i= s ; 
    int j= e ;
    while(i< pivotIndex && j> pivotIndex){
        while(arr[i]< pivot){
            i++;
        }
        while(arr[j]> pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i] , arr[j]);
            i++ , j-- ;
        }
    }
    return pivotIndex;
}

void Quick_sort(int* arr , int s , int e){
    if(s>=e){
        return ;
    }

    int p = partition(arr , s , e);

    Quick_sort(arr , s , p-1);

    Quick_sort(arr , p+1 , e);
}

int main(){
    int n;
    cin>>n;
    int* arr= new int[n];
    for(int i = 0 ; i< n ; i++){
        cin>>*(arr + i);
    }
    Quick_sort(arr , 0 , n-1);
    for(int i = 0 ; i< n ; i++){
        cout<<*(arr + i)<<" ";
    }
    cout<<endl;
    return 0;
}