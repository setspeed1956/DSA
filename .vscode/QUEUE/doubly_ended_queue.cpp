#include<iostream>
#include<queue>
using namespace std ;

int main(){
    deque<int> doubly_ended_queue ;

    doubly_ended_queue.push_front(1) ;
    doubly_ended_queue.push_front(2) ;
    doubly_ended_queue.push_front(3) ;
    doubly_ended_queue.push_front(4) ;
    doubly_ended_queue.push_front(5) ;
    doubly_ended_queue.push_front(6) ;

    cout << doubly_ended_queue.front() << endl ;
    cout << doubly_ended_queue.back() << endl ;
    doubly_ended_queue.pop_front() ;

    cout << doubly_ended_queue.front() << endl ;
    cout << doubly_ended_queue.back() << endl ;
    doubly_ended_queue.pop_front() ;

    cout << doubly_ended_queue.front() << endl ;
    cout << doubly_ended_queue.back() << endl ;
    doubly_ended_queue.pop_front() ;

    cout << doubly_ended_queue.front() << endl ;
    cout << doubly_ended_queue.back() << endl ;
    doubly_ended_queue.pop_front() ;

    cout << doubly_ended_queue.front() << endl ;
    cout << doubly_ended_queue.back() << endl ;
    doubly_ended_queue.pop_front() ;

    cout << doubly_ended_queue.front() << endl ;
    cout << doubly_ended_queue.back() << endl ;
    doubly_ended_queue.pop_front() ;

    cout << doubly_ended_queue.front() << endl ;
    cout << doubly_ended_queue.back() << endl ;
    doubly_ended_queue.pop_front() ;

    cout<< doubly_ended_queue.size() << endl ;

return 0 ;
}
