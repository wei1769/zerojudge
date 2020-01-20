#include<bits/stdc++.h>
using namespace std ;
int main(){
	int B ,P,M,i,x;
	while(cin >>B>>P>>M)
	{	
		int p = P;
		int co = 0;
		long long bi[50] ;
		int p2[50];
		for ( i= 1 ; i< P;i*=B)
		{	
			p2[co]= p%B;
			p = p/B
			bi[co]= pow(B,i);
			co++;
		}
		for ( int k = 0 ;k<50;k++)
		{
			x =x* p2[k]*(bi[k]%M)

}
