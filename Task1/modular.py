#include <iostream>
#define ll long long


ll fastModExp(ll a, ll b, ll m)
{
    ll res = 1;
    while(b>0){
     if(b&1){
        res = (res*a)%m;
     }
       a =(a*a)%m;
       b = b>>1;
    }
            
    return res;
}

using namespace std;
int main() {
    ll b;
    ll p;
    ll m;
    
    cout << "Enter b: ";
    cin >> b;
    
    cout << "Enter p: ";
    cin >> p;
    
    cout << "Enter m: ";
    cin >> m;
    
    ll c = fastModExp(b,p,m);
    
    cout << c <<endl;
    
}