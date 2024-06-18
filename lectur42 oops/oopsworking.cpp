#include<bits/stdc++.h>
using namespace std;
class Hero{
    public:
     int level;
     int health;
     void print(){
        cout<<health<<endl;
     }
};

int main(){
    Hero satyam;
    cin>>satyam.level;
    satyam.health=100;
    cout<<"level: "<<satyam.level<<endl;
    cout<<"health: "<<satyam.health<<endl;
    return 0;
}