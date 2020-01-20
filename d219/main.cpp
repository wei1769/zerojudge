#include<bits/stdc++.h>
using namespace std ;
int main(){
	int B ,P,M;
	while(cin >>B>>P>>M)
	{
	    B%=M;
	    int bi = B;
	    int x = 1;
	    while(P)
        {
            if(P%2 == 1)
            {
                x= (x*(P%2)*bi)%M;
            }
            bi = (bi*bi)%M;
            P/=2;
        }
            cout<<x<<endl;



}}
