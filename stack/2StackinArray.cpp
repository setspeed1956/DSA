#include<bits/stdc++.h>
using namespace std;
class TwoStack{
 
     int *arr ;
     int top1 ;
     int top2 ;
     int size ;
    public: 
     TwoStack(int s){
        this-> size = s;
        int top1 = -1;
        int top2 = s ;
        arr = new int[s];
     }

     void push1(int num){
        if(top2 - top1 > 1){
            top1++;
            arr[top1]= num;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
     }
     void push2(int num){
        if(top2 - top1 > 1){
            top2--;
            arr[top2]= num;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
     }

     int pop1(){
        if(top1 >= 0){
            int temp = arr[top1];
            top1--;
            return temp;
        }
        else{
            return -1;
        }
     }

     int pop2(){
        if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
     }
};

int main(){
    TwoStack st(6);
     st.push1(1);
     st.push2(6);

     st.push1(2);
     st.push2(3);

     st.push1(4);
     st.push2(5);
      
     st.push1(2);
     st.push2(5);

}