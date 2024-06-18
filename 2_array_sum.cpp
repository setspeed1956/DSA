#include<iostream>
#include<vector>
using namespace std;
void print (vector<int> arr){
    for(int i : arr){
        cout<<i;
    }
    cout<<endl;
}

void  reverse(vector<int> arr){
    vector<int> arr_4;
    for(int i=arr.size()-1 ; i>=0 ; i--){
        arr_4.push_back(arr[i]);
    }
    print(arr_4);
}


int main(){
    int size_1,size_2;
    cin>>size_1;
    int arr_1[1000];
    for(int i=0 ; i<size_1 ; i++){
        cin>>arr_1[i];
    }
    cin>>size_2;
    int arr_2[1000];
    for(int i=0 ; i<size_2 ; i++){
        cin>>arr_2[i];
    }
    int carry=0;
    vector<int> arr;
    int i=size_1-1;
    int j=size_2-1;
    int sum;
    //this is for taking carry only
    while(i>=0 && j>=0){
        sum=arr_1[i]+arr_2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        arr.push_back(sum);
        i--;
        j--;
    }
    // first case if size_1>size_2
    while(i>=0){
        sum=arr_1[i]+carry;
        carry=sum/10;
        sum=sum%10;
        arr.push_back(sum);
        i--;
    }
    // second case if size_2>size_1
    while(j>=0){
        sum=arr_2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        arr.push_back(sum);
        j--;
    }
    if(carry){
        arr.push_back(carry);  // this to check if carry generated in the last iteration then we have to add it 
    }
    reverse(arr);

}