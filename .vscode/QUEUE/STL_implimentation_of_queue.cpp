#include<iostream>
#include<queue>
using namespace std ;

int main(){
    queue<int> my_queue ;

    my_queue.push(1) ;
    my_queue.push(2) ;
    my_queue.push(3) ;
    my_queue.push(4) ;
    my_queue.push(15) ;

    cout << " size of my queue " << my_queue.size() << endl ;
    cout << " element at front " << my_queue.front() << endl ;
    my_queue.pop();

    cout << " size of my queue " << my_queue.size() << endl ;
    cout << " element at front " << my_queue.front() << endl ;
    my_queue.pop();

    cout << " size of my queue " << my_queue.size() << endl ;
    cout << " element at front " << my_queue.front() << endl ;
    my_queue.pop();

    cout << " size of my queue " << my_queue.size() << endl ;
    cout << " element at front " << my_queue.front() << endl ;
    my_queue.pop();

    cout << " size of my queue " << my_queue.size() << endl ;
    cout << " element at front " << my_queue.front() << endl ;
    my_queue.pop();

    if(my_queue.empty()){
        cout << " my queue is empty " << endl ;
    }
    else{
        cout << " my queue is not empty " << endl ;
    }

    return 0 ;
}