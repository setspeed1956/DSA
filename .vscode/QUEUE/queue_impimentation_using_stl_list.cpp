#include<bits/stdc++.h>
using namespace std ;

class queue_implimentation_using_stl_list{
    private:
     list<int> maded_queue ;
     
    public:
     void Enqueue(int data){
        maded_queue.push_back(data);
     } 

     int Dequeue(){
        if(maded_queue.empty()){
            return -1 ;
        }
        else{
            int num = maded_queue.front();
            maded_queue.pop_front();
            return num ;
        }
     }

     bool isEmpty(){
        if(maded_queue.empty()){
            return 1 ;
        }
        else{
            return 0 ;
        }
     }
     int front(){
        if(maded_queue.size() == 0){
            return -1 ;
        }
        else{
            return maded_queue.front() ;
        }
     }
};

int main(){
    queue_implimentation_using_stl_list first_queue ;
    first_queue.Enqueue(1) ;
    first_queue.Enqueue(2) ;
    first_queue.Enqueue(3) ;
    first_queue.Enqueue(4) ;
    first_queue.Enqueue(5) ;

    cout << " element at front is " << first_queue.front() << endl ;
    cout << " element at deleted is " << first_queue.Dequeue() << endl ;
    cout << " queue is empty " << boolalpha << first_queue.isEmpty() << endl ;

    cout << " element at front is " << first_queue.front() << endl ;
    cout << " element at deleted is " << first_queue.Dequeue() << endl ;
    cout << " queue is empty " << boolalpha << first_queue.isEmpty() << endl ;

    cout << " element at front is " << first_queue.front() << endl ;
    cout << " element at deleted is " << first_queue.Dequeue() << endl ;
    cout << " queue is empty " << boolalpha << first_queue.isEmpty() << endl ;

    cout << " element at front is " << first_queue.front() << endl ;
    cout << " element at deleted is " << first_queue.Dequeue() << endl ;
    cout << " queue is empty " << boolalpha << first_queue.isEmpty() << endl ;

    cout << " element at front is " << first_queue.front() << endl ;
    cout << " element at deleted is " << first_queue.Dequeue() << endl ;
    cout << " queue is empty " << boolalpha << first_queue.isEmpty() << endl ;

    cout << " element at front is " << first_queue.front() << endl ;
    cout << " element at deleted is " << first_queue.Dequeue() << endl ;
    cout << " queue is empty " << boolalpha << first_queue.isEmpty() << endl ;
return 0 ;
}