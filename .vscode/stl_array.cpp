#include<iostream>
using namespace std;
#include<array>

int main(){
    array<int,4> a={1,2,3,4};
    int size=a.size(); // size gives number of element
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"element at 2nd index:"<<a.at(2)<<endl;
    cout<<"array is empty gives boolean return:"<<a.empty()<<endl;
    cout<<"first element"<<a.front()<<endl;
    cout<<"last element"<<a.back()<<endl;

}