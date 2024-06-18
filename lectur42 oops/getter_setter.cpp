#include<bits/stdc++.h>
using namespace std;
class Hero{
    private:
     int level;
    public:
     int health;
    void print(){
        cout<<health<<endl;
    }
    int getlevel(){
        return level;
    }
    int gethealth(){
        return health;
    }

    void setlevel(int l){
        level = l;
    }
    void sethealth(int h){
        health = h;
    }
};

int main(){

    // here we did static allocation
    Hero satyam;
    cout<<"satyam health: "<<satyam.gethealth()<<endl;
    satyam.sethealth(10);
    cout<<"satyam health: "<<satyam.gethealth()<<endl;
    cout<<"satyam health: "<<satyam.getlevel()<<endl;
    satyam.setlevel(100);
    cout<<"satyam health: "<<satyam.getlevel()<<endl;
    

    // here we see how we can do dynamic allocation

    Hero *satyam1 = new Hero;
    cout<<"satyam1 health : "<<(*satyam1).gethealth()<<endl;
      // we have one more way to do this using arrow
    cout<<"satyam1 health : "<<satyam1->gethealth()<<endl;

    (*satyam1).sethealth(10);
    (*satyam1).setlevel(100);
    cout<<"satyam1 health is : "<<(*satyam1).gethealth()<<endl;
    cout<<"satyam1 health is : "<<(*satyam1).getlevel()<<endl;
    cout<<"satyam1 health is : "<<satyam1->gethealth()<<endl;
    cout<<"satyam1 health is : "<<satyam1->getlevel()<<endl;
    return 0;
}