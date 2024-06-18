#include<bits/stdc++.h>
using namespace std;

class Solution {
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
    public: 
     int largestRectangularArea(vector<int>& height){
        int n = height.size();
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
};

int main(){
    int n;
    cin>>n;

    vector<int> height(n);
    for(int i = 0 ; i < n ; i++){
        cin>>height[i];
    }
    Solution obj;
    int area = obj.largestRectangularArea(height);
    cout<<area<<endl;

}