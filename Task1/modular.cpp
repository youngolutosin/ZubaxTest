//Modular Exponent
#include <iostream>
#define ll long long


ll fastModExp(ll a, ll b, ll m)
{    
    ll res = 1;
    if (m == 0)
    {
    return -1; //handles error of zero division
    }
    if(m != 0){
    while(b>0){
     if(b&1){
        res = (res*a)%m;
     }
       a =(a*a)%m;
       b = b>>1;
    }
    }      
    return res;
}


