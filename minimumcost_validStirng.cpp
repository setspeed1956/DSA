#include<bits/stdc++.h>
using namespace std;

int minimumcost(string &str){
        stack<char> s;
    for(int i = 0 ; i < str.length() ; i++){
        if(str[i]=='{'){
            s.push(str[i]);
        }
        else{
            if(!s.empty() && s.top()== '{'){
                s.pop();
            }
            else{
                s.push(str[i]);
            }
        }
    }
    int a = 0 , b = 0 ;
    int nm = s.size();
    for(int i = 0 ; i < nm ; i++){
        if(s.top() == '{'){
            a++;
            
        }
        else{
            b++;
            
        }
        s.pop();
    }
    int num = (a + 1) / 2 + (b + 1) / 2;
    return num;
}

int main(){
    int n;
    cout<<"enter the size : ";
    cin>>n;
    string str;
    for(int i = 0 ; i < n ; i++){
        char ch;
        cin>>ch;
        str.push_back(ch);
    }
    if(n % 2 == 1){
        cout<<"ivalid entries "<<endl;
    }
    else{
        cout<<minimumcost(str)<<endl;
    }
    
    return 0 ;
}