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
        map<int , int> elements ;
        int maxi = INT_MIN ;
        for(int i = 0 ; i < n ; i++){
            int x ;
            cin >> x ;
            elements[x]++ ;
            if(x > maxi){
                maxi = x ;
            }
        }
        for(int i = 0 ; i < n ; i++){
            int x ;
            cin >> x ;
            elements[x]++ ;
            if(x > maxi){
                maxi = x ;
            }
        }
        int min_difference = INT_MAX ;
        for(int i = 1 ; i <= maxi ; i++){
            int num = n ;
            
        }
        cout << min_difference << endl ;
    }
    return 0 ;
}
