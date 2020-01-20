#include<bits/stdc++.h>
using namespace std ;
int main(){
	int B ,P,M,i,x = 1;
	while(cin >>B>>P>>M)
	{
		int p = P;
		int co = 0;
		long long bi[50] ;
		int p2[50];
		for ( i= 1 ; i< P;i*=B)
		{
			bi[co]= pow(B,i);
			cout <<"bi "<< bi[co]<<endl;
			co++;
		}
		co = 0 ;
		for (int r = 50 ; r >= 0 ; r ++ )
		{       if(pow(B,i)<P){

                p2[r]=
		}
        }

		for ( int k = 0 ;k<50;k++)
		{
			x =x*p2[k]*(bi[k]%M);
			cout <<  "x   "<< x <<endl ;
		}


}}
