#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class N_Stack{
    private:
     int *arr; // given array
     int *top; // to keep track of top of stack
     int *next; // we use this as next free location

     int n , s;
     int free_spot; // we have to one base address form where we have to start
    public:
     N_Stack(int n , int s){
        // intializising all with there respective size
        arr = new int[s];
        top = new int[n];
        next = new int[s];
        
        // used memset for intializing -1 bytes by bytes
        memset(top , -1 , sizeof(top));

        for(int i = 0 ; i < s ; i++){
            next[i] = i + 1;
        }
        next[s - 1] = -1;
        free_spot = 0;
     }

     bool push(int element , int m){
        // check for overflow 
        if(free_spot == -1){
            return false;
        }
        //find index
        int index = free_spot;

        // free_spot updating 
        free_spot = next[index];

        // inserting element at index position
        arr[index] = element;

        // updating next
        next[index] = top[m - 1];

        // updating top
        top[m - 1] = index;

        return true;
     }

     int pop(int m){
        //check for underflow
        if(top[m - 1] == -1){
            return -1;
        }

        // we have to update top because top is deleted
        int index = top[m - 1];
        
        // we have to update next also
        top[m - 1] = next[index];

        // updating free_spot
        next[index] = free_spot;

        free_spot = index;

        return arr[index];
     }
};

int main (){
    N_Stack s(3 , 6);
    cout<<boolalpha<<s.push(10 , 1)<<endl;
    cout<<boolalpha<<s.push(11 , 2)<<endl;
    cout<<boolalpha<<s.push(12 , 1)<<endl;
    cout<<boolalpha<<s.push(15 , 2)<<endl;
    cout<<boolalpha<<s.push(14 , 1)<<endl;
    cout<<boolalpha<<s.push(16 , 3)<<endl;
    cout<<boolalpha<<s.push(17 , 3)<<endl;
    
    // from here we see our pop is working correctly or not 
    cout<<s.pop(1)<<endl;
    cout<<s.pop(2)<<endl;
    cout<<s.pop(1)<<endl;
    cout<<s.pop(2)<<endl;
    cout<<s.pop(1)<<endl;
    cout<<s.pop(3)<<endl;
    cout<<s.pop(3)<<endl;
    cout<<s.pop(3)<<endl;
    cout<<s.pop(3)<<endl;
    cout<<s.pop(3)<<endl;
    cout<<s.pop(3)<<endl;
    cout<<s.pop(3)<<endl;
    cout<<s.pop(3)<<endl;
}