#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int> v;    
    cout<<"capacity "<<v.capacity()<<endl;
    int size=v.size(); // size gives number of element
    cout<<"size "<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<v[i]<<endl;
    }
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<"capacity "<<v.capacity()<<endl;
    size=v.size(); // size gives number of element
    cout<<"size "<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<v[i]<<endl;
    }
    cout<<"element at 2nd index:"<<v.at(2)<<endl;
    cout<<"vector is empty gives boolean return:"<<v.empty()<<endl;
    cout<<"first element"<<v.front()<<endl;
    cout<<"last element"<<v.back()<<endl;
    v.pop_back();
    v.pop_back();
    cout<<"after poping:"<<endl;
    for(int  i: v){
        cout<<i<<endl;
    }

}