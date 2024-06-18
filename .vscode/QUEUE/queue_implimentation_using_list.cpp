#include<iostream>
using namespace std ;

class Node{

   public :
    int data ;
    Node* next ;

    Node(int data){
        this-> data = data ;
        this-> next = NULL ;
    }
};

class queue_using_list{
    public:
    Node* front ;
    Node* rear ;

    queue_using_list(){
        front = rear = NULL ;
    }

    void enqueue(int element){
        Node* temp = new Node(element) ;
        if(rear == NULL){
            front = rear = temp ;
        }
        else{
            rear-> next = temp ;
            rear = temp ;
        }
    }

    int dequeue(){
        if(front == NULL){
            return -1 ;
        }
        else{
            int data_deleted = front-> data ;
            Node* temp = front ;
            front = front-> next ;
            temp-> next = NULL ;
            if(front == NULL){
                rear = NULL ;
            }
            delete temp ;
            return data_deleted ;
        }
    }

    int qfront(){
        if(front == NULL){
            return -1 ;
        }
        else{
            int data_shown = front-> data ;
            return data_shown ;
        }
    }

    bool isEmpty(){
        if(front == NULL){
            return 1 ;
        }
        else{
            return 0 ;
        }
    }
};

int main(){
    queue_using_list our_queue ;
    our_queue.enqueue(1) ;
    our_queue.enqueue(2) ;
    our_queue.enqueue(3) ;
    our_queue.enqueue(4) ;
    our_queue.enqueue(5) ;

    cout << " element at front " << our_queue.qfront() << endl ;
    cout << " element to be deleted is " << our_queue.dequeue() << endl ;

    cout << " element at front " << our_queue.qfront() << endl ;
    cout << " element to be deleted is " << our_queue.dequeue() << endl ;

    cout << " element at front " << our_queue.qfront() << endl ;
    cout << " element to be deleted is " << our_queue.dequeue() << endl ;

    cout << " element at front " << our_queue.qfront() << endl ;
    cout << " element to be deleted is " << our_queue.dequeue() << endl ;

    cout << " element at front " << our_queue.qfront() << endl ;
    cout << " element to be deleted is " << our_queue.dequeue() << endl ;

    cout << " element at front " << our_queue.qfront() << endl ;
    cout << " element to be deleted is " << our_queue.dequeue() << endl ;
}