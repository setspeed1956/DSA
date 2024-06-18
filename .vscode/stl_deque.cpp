#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    cout<<"size:"<<dq.size()<<endl;
    for(int i: dq){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"element at index 1:"<<dq.at(1)<<endl;
    cout<<"front:"<<dq.front()<<endl;
    cout<<"back:"<<dq.back()<<endl;
    dq.pop_back();
    dq.pop_front();
    cout<<"size:"<<dq.size()<<endl;
    for(int i: dq){
        cout<<i<<" ";
    }
    dq.erase(dq.begin(),dq.begin()+1);
    cout<<"size:"<<dq.size()<<endl;
}