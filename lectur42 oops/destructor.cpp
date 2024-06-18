#include<bits/stdc++.h>
using namespace std;
class Hero{

    private:
     int level;
    public:
     int health;
     char *name;
     static int timetocomplete;
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
    //Hero (Hero& temp){
    //    this-> health = temp.health;
    //    this-> level = temp.level;
    // }
    void print(){
        cout<<"name is : "<<this->name<<endl;
        cout<<"health is : "<<this->health<<endl;
        cout<<"level is : "<<this->level<<endl;
    }
    int getlevel(){
        return level;
    }

    static int random(){
        return timetocomplete;
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
    ~Hero (){
        cout<<"destructor is called "<<endl;
    }
};

int Hero::timetocomplete= 5;

int main(){
    Hero satyam ;
    Hero *satyam1 = new Hero;

    cout<<Hero::timetocomplete<<endl;
    cout<<Hero:: random()<<endl;
    return 0;
}
