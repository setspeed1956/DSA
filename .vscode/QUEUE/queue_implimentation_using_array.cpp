#include<bits/stdc++.h>
using namespace std ;

class queue_implimentation{
     int* arr ;
     int size ;
     int front1 ;
     int rear ;
    
    public: 
     queue_implimentation() {
        size = 1000 ;
        arr = new int[size] ;
        front1 = 0 ;
        rear = 0 ;
     }

     bool isEmpty(){
        if(rear == front1){
            return true ; 
        }
        else{
            return false ;
        }
     }
     
     // for inputting of element
     void Enqueue(int data){
        if(rear == size){
            cout << " queue is full " << endl ;
        }

        else{
            arr[rear] = data ;
            rear++ ;
        }
     }

     // for deleting element
     int Dequeue(){
        if(front1 == rear){
            return 0;
        }
        else{
            int ans = arr[front1] ;
            arr[front1] = -1 ;
            front1++ ;
            if(front1 == rear){
                front1 = 0 ;
                rear = 0 ;  
            }
            return ans ;
        }
     }

     // for showing front element 
     int  front2(){
        if(front1 == rear){
            return 0 ;
        }
        else{
            return arr[front1] ;
        }
     }
};


int main(){
    queue_implimentation obj1 ;
    obj1.Enqueue(1);
    obj1.Enqueue(2);
    obj1.Enqueue(3);
    obj1.Enqueue(4);
    obj1.Enqueue(5);
    obj1.Enqueue(6);

    cout<< " element at front is : " <<obj1.front2() << endl ;
    cout<< " element which is deleted is : " <<obj1.Dequeue() << endl ;

    cout<< " element at front is : " <<obj1.front2() << endl ;
    cout<< " element which is deleted is : " <<obj1.Dequeue() << endl ;

    cout<< " element at front is : " <<obj1.front2() << endl ;
    cout<< " element which is deleted is : " <<obj1.Dequeue() << endl ;

    cout<< " element at front is : " <<obj1.front2() << endl ;
    cout<< " element which is deleted is : " <<obj1.Dequeue() << endl ;

    cout<< " element at front is : " <<obj1.front2() << endl ;
    cout<< " element which is deleted is : " <<obj1.Dequeue() << endl ;

    cout<< " element at front is : " <<obj1.front2() << endl ;
    cout<< " element which is deleted is : " <<obj1.Dequeue() << endl ;

    cout<< " element at front is : " <<obj1.front2() << endl ;
    cout<< " element which is deleted is : " <<obj1.Dequeue() << endl ;

    cout<< " element at front is : " <<obj1.front2() << endl ;
    cout<< " element which is deleted is : " <<obj1.Dequeue() << endl ;

return 0 ;
}