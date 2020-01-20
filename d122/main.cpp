#include<bits/stdc++.h>
using namespace std ;
int main(){
    int a,x= 0;
    while (cin >> a)
    {
        for(; a>= 5 ;)
        {
            x= x + a/5;
            a = a/5;

        }
        cout << x<< endl ;
        x = 0;
    }

}
