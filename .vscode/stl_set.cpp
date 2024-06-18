#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> st;
    st.insert(6);
    st.insert(4);
    st.insert(2);
    st.insert(5);
    st.insert(5);
    st.insert(5);
    st.insert(5);
    st.insert(5);
    st.insert(5);
    st.insert(3);
    for (int  i : st)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of :"<<st.size()<<endl;
    set<int>::iterator it=st.begin();
    it++;

    st.erase(it);
    for (int  i : st)
    {
        cout<<i<<" ";
    }
}