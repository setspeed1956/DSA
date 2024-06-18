#include<iostream>
using namespace std ;

class Circular_Queue{
    int *arr ;
    int front ;
    int rear ;
    int size ;

    public:

    Circular_Queue(int size){
        this-> size = size ;
        arr = new int[size] ;
        front = rear = -1 ;
    }

    void Enqeue(int element){
        if((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))){
            cout<< "queue is full" << endl ;
        }
        else if(front == -1){ // when we are inserting first element 
             front = rear = 0 ;     
             arr[rear] = element ;
        }
        else if(rear == size - 1 && front != 0){
            rear = 0 ;
            arr[rear] = element ;
        }
        else{
            rear++ ;
            arr[rear] = element ;
        }
        
    }

    int Deqeue(){
        if(front == -1){
            cout << "queue is empty" ;
            return -1 ;
        }
        int element = arr[front] ;
        arr[front] = -1 ;
        if(front == rear){
            front = rear = -1 ;
        }
        else if(front == size - 1){
            front = 0 ;
        }
        else{
            front++ ;
        }
        return element ;
    }

    bool isEmpty(){
        if(front == -1){
            return 1 ;
        }
        else{
            return 0 ;
        }
    }
};

int main(){
    Circular_Queue our_queue(5) ;
    our_queue.Enqeue(1) ;
    our_queue.Enqeue(2) ;
    our_queue.Enqeue(3) ;
    our_queue.Enqeue(4) ;
    our_queue.Enqeue(5) ;

    cout << "element which is deleted is " << our_queue.Deqeue() << endl ;
    cout << "element which is deleted is " << our_queue.Deqeue() << endl ;
    cout << "element which is deleted is " << our_queue.Deqeue() << endl ;
    cout << "element which is deleted is " << our_queue.Deqeue() << endl ;
    cout << "element which is deleted is " << our_queue.Deqeue() << endl ;
    cout << "element which is deleted is " << our_queue.Deqeue() << endl ;
}