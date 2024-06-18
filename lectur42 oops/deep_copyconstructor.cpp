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
        char *ch= new char[strlen(temp.name) + 1];
        strcpy(ch , temp.name);
        this-> name = ch;
        this-> health = temp.health;
        this-> level = temp.level;
    }
    void print(){

        cout<<"[ name is : "<<this->name<<" ";
        cout<<"health is : "<<this->health<<" ";
        cout<<"level is : "<<this->level<<"]";
        cout<<endl;
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
    Hero satyam;
    satyam.sethealth(13);
    satyam.setlevel(144);
    char name[7]="satyam";
    satyam.setname(name);

    satyam.print();


    Hero abhishek(satyam);
    abhishek.print();

    // here shallow copy happend
    satyam.name[0]='A';
    satyam.print();
    abhishek.print();
    return 0;
}
