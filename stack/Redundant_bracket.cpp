#include<bits/stdc++.h>
using namespace std;


bool redundant_bracket(string &str , int n){
    stack<char> container;
    bool isredundant = true;
    for(int i = 0 ; i < n ; i++){
        if(str[i] =='(' || str[i] =='+' || str[i] =='-' || str[i] =='*' || str[i] =='/'){
            container.push(str[i]);
        }
        else{
            if(str[i] == ')'){
                while(container.top() != '('){
                    char top = container.top();
                    if(top =='+' || top =='-' || top =='/' || top =='*'){
                        isredundant = false;
                    }
                    container.pop();
                }
            }
        }
    }
    return isredundant;
}
int main(){
    string str;
    int n;
    cout<<"enter the size: ";
    cin>>n;
    while(n--){
        char ch;
        cin>>ch;
        str.push_back(ch);
    }
    if(redundant_bracket(str  , n)){
        cout<<"yes "<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}

