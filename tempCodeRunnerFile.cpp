#include <iostream>
#include<vector>
#include<climits>
#include<map>
using namespace std;


int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> A(n) ;
        vector<int> B(n) ;
        map<int , int> elements ;
        int maxi = INT_MIN ;
        for(int i = 0 ; i < n ; i++){
            cin >> A[i] ;
            elements[A[i]]++ ;
            if(A[i] > maxi){
                maxi = A[i] ;
            }
        }
        for(int i = 0 ; i < n ; i++){
            cin >> B[i] ;
            elements[B[i]]++ ;
            if(B[i] > maxi){
                maxi = B[i] ;
            }
        }
        int min_difference = INT_MAX ;
        for(int i = 1 ; i <= maxi ; i++){
            int last_index = i ;
            int num = n ;
            while(num != 0 && last_index <= maxi){
                num -=  elements[last_index] ;
                if(num == 0){
                    break ;
                }
                last_index += 1 ;
            }
            if(num == 0){
                min_difference = min(elements[last_index] - elements[i] , min_difference) ;
            }
            
        }
        cout << min_difference << endl ;
    }
    return 0 ;
}
