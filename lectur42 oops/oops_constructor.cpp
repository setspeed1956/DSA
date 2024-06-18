#include<bits/stdc++.h>
using namespace std;
class Hero{

    private:
     int level;
    public:
     int health;
     char *name;
    // constructor defined by us
    Hero(){
        cout<<"our constructor is called"<<endl;
        name = new char[1000];
    }


    // defining parametrized constructor
    Hero(int health , int level){
        this-> health = health;
        this-> level = level;
    }
    
    // Copy constructor 
    Hero (Hero& temp){
        this-> health = temp.health;
        this-> level = temp.level;
    }
    void print(){
        cout<<"name is : "<<this->name<<endl;
        cout<<"health is : "<<this->health<<endl;
        cout<<"level is : "<<this->level<<endl;
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

    void setname(char name[]){
        strcpy(this->name ,name);
    }
};

int main(){
    Hero satyam; // we must put constructor in public otherwise compiler not work

    Hero *satyam1 = new Hero();

    // parametrized constructor object
    Hero satyam2(12 , 134);
    cout<<"health is "<<satyam2.gethealth()<<endl;
    cout<<"level is "<<satyam2.getlevel()<<endl;


    // We see copy constructor 
    Hero abhishek(satyam2);
    cout<<"health is of abhishek "<<abhishek.gethealth()<<endl;
    cout<<"level is abhishek "<<abhishek.getlevel()<<endl;

    
    return 0;
}
