#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    switch (1)
    {
    case 1:cout<<n/100<<endl;
            n=n-100*(n/100);
    case 2:cout<<n/50<<endl;
            n=n-50*(n/50);
    case 3:cout<<n/20<<endl;
            n=n-20*(n/20);
    case 4:cout<<n/10<<endl;
            n=n-10*(n/10);
    case 5:cout<<n/5<<endl;
            n=n-5*(n/5);
    case 6:cout<<n<<endl;        
    }
return 0;
}