#include<iostream>
using namespace std ;

class Node{
    public:
    int data ;
    Node* next ;
     Node(int data){
        this-> data = data ;
        this-> next = NULL ;
     }

};

class doubly_queue{
    Node* front ;
    Node* rear ;

    public:
    doubly_queue(){
        front = rear = NULL ;
    }

    void Enqueue_front(int data){
        Node* temp = new Node(data) ;
        if(front == NULL){
            front = rear = temp ;
        }
        else{
            temp-> next = front ;
            front = temp ;
        }
    }

    void Enqueue_back(int data){
        Node* temp = new Node(data) ;
        if(rear == NULL){
            front = rear = temp ;
        }

        else{
            rear-> next = temp ;
            rear = temp ;
        }
    }

    int Dequeue_front(){
        if(front == NULL){
            return -1 ;
        }
        Node* temp = front ;
        front = front-> next ;
        int data = temp-> data ;
        temp-> next = NULL ;
        if(front == NULL){
            rear = NULL ;
        }
        delete temp ;
        return data ;
    }

    int Dequeue_back(){
        if(rear == NULL){
            return -1 ;
        }
        else if(front-> next == NULL){
            Node* temp = front ;
            int data = temp-> data ;
            temp-> next = NULL ;
            front = rear = NULL ;
            delete temp ;
            return data ;
        }
        else{
            Node* previous = front ;
            while(previous-> next-> next != NULL){
                previous = previous-> next ;
            }
            Node* deleting_node = previous-> next ;
            previous-> next = NULL ;
            rear = previous ;
            int data = deleting_node-> data ;
            deleting_node-> next = NULL ;
            delete deleting_node ;
            return data ;
        }

    }

    void print() ;
    bool isEmpty(){
        if(front == NULL){
            return 1 ;
        }
        return 0 ;
    }

    int qfront(){
        if(isEmpty()){
            return -1 ;
        }
        else{
            return front-> data ;
        }
    }
    int qrear(){
        if(isEmpty()){
            return -1 ;
        }
        else{
            return rear-> data ;
        }
    }
};

void doubly_queue :: print(){
    Node* temp = front ;
    if(front == NULL){
        cout << "NO element" << endl ;
        return ;
    }
    
    while(temp != NULL){
        cout<< temp-> data <<" ";
        temp = temp-> next ;

    }
    cout << endl ;
}


int main(){
    doubly_queue obj ;
    obj.Enqueue_front(1) ;
    obj.Enqueue_front(2) ;
    obj.Enqueue_front(3) ;
    obj.Enqueue_front(4) ;
    obj.print() ;

    obj.Enqueue_back(5);
    obj.Enqueue_back(6);
    obj.Enqueue_back(7);
    obj.Enqueue_back(8);
    obj.print() ;

    cout << "element at front is : " << obj.qfront() << endl ;
    cout << "element at back is : " << obj.qrear() << endl ;
    cout << "deleted element from front :" << obj.Dequeue_front() << endl ;
    obj.print() ;

    cout << "deleted element from front :" <<  obj.Dequeue_front() << endl ;
    obj.print() ;

    cout << "deleted element from front :" <<  obj.Dequeue_front() << endl ;
    obj.print() ;

    cout << "deleted element from front :" << obj.Dequeue_front() << endl ;
    obj.print() ;
    
    cout << "deleted element from back :" << obj.Dequeue_back() << endl ;
    obj.print() ;

    cout << "deleted element from back :" << obj.Dequeue_back() << endl ;
    obj.print() ;

    cout << "deleted element from back :" << obj.Dequeue_back() << endl ;
    obj.print() ;

    cout << "deleted element from back :" << obj.Dequeue_back() << endl ;
    obj.print() ;
    
}