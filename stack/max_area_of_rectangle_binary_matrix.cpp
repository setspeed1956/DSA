#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    vector<int> nextSmallerElement(vector<int> arr , int n){
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i = n-1 ; i > 0 ; i--){
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()]>= curr){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
        }
    
    vector<int> prevSmallerElement(vector<int> arr , int n){
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i = 0 ; i <n  ; i++){
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()]>= curr){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
        }

    int largestRectangularArea(vector<int>& height , int n){
        int area = INT_MIN;

        vector<int> next(n);
        next = nextSmallerElement(height , n);

        vector<int> prev(n);
        prev = prevSmallerElement(height , n);

        for(int i = 0 ; i < n ; i++){
            int l = height[i];
            if(next[i] == -1){
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;
            int newArea = l * b;
            area = max(area , newArea);
        } 
        return area;
     }

    public:
     int maxArea(vector<vector<int>> &rectangle , int n , int m){
        int area = largestRectangularArea(rectangle[0] , m);
        for(int i = 1 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(rectangle[i][j] != 0){
                    rectangle[i][j] = rectangle[i][j] + rectangle[i - 1][j];
                }
                else{
                    rectangle[i][j] = 0;
                }
            }
            area = max(area , largestRectangularArea(rectangle[i] , m));
        }
        return area;
     }
};

int main(){
    int n , m;
    cin>>n>>m ;
    vector< vector<int> > rectangle( n , vector<int> (m) );
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>rectangle[i][j];
        }
    }
    Solution obj1;
    int maximum_area = obj1.maxArea( rectangle , n , m);
    cout<< maximum_area << endl;
    return 0 ;
}