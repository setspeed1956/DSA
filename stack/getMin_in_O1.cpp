#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Special_Stack{
    stack<int> s ;
    int mini ;

    public: 
     void push(int data){
        // for first element
        if(s.empty()){
            s.push(data) ;
            mini = data ;
        }
        else{
            if(data < mini){
                s.push(2 * data - mini) ;
                mini = data ;
            }

            else{
                s.push(data);
            }
        }
     }

     int pop(){
        // checking stack is empty
        if(s.empty()){
            return -1 ;
        }
        
        int curr = s.top() ;
        s.pop() ;

        if(curr > mini){
            return curr ;
        }
        else{
            int prevMin = mini ;
            int val = 2 * mini - curr ;
            mini = val ;
            return prevMin ;
        }
     }

     int top(){
        if(s.empty()){
            return -1 ;
        }
        
        int curr = s.top() ;
        if(curr < mini){
            return mini ;
        }
        else{
            return curr ;
        }
     }

     bool isEmpty(){
        return s.empty() ;
     }

     int getMin(){
        if(s.empty()){
            return -1 ;
        }

        return mini ;
     }
};

int main(){
    Special_Stack obj1 ;
    obj1.push(5);
    obj1.push(3);
    obj1.push(8);
    obj1.push(2);
    obj1.push(4);

    // we will see min at each position

    cout<< "minimum value which is in stack in O(1) is :" <<obj1.getMin() << endl ;
    cout<< "deleted value from the stack is : " << obj1.pop() << endl ;
    cout<< "minimum value which is in stack in O(1) is :" <<obj1.getMin() << endl ;
    cout<< "deleted value from the stack is : " << obj1.pop() << endl ;
    cout<< "minimum value which is in stack in O(1) is :" <<obj1.getMin() << endl ;
    cout<< "deleted value from the stack is : " << obj1.pop() << endl ;
    cout<< "minimum value which is in stack in O(1) is :" <<obj1.getMin() << endl ;
    cout<< "deleted value from the stack is : " << obj1.pop() << endl ;
    cout<< "minimum value which is in stack in O(1) is :" <<obj1.getMin() << endl ;
    cout<< "deleted value from the stack is : " << obj1.pop() << endl ;
    cout<< "minimum value which is in stack in O(1) is :" <<obj1.getMin() << endl ;
    cout<< "deleted value from the stack is : " << obj1.pop() << endl ;


}