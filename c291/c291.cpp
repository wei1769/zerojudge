#include<bits/stdc++.h>
using namespace std;
int main ()
{
long int person, current, start,count=0 ;

long int fri[50000][2];
cin >>person;
for (int i = 0 ; i<person ;i++)
	{
		cin>> fri[i][0] ; 
	      	fri[i][1]= 0;
	}
for (int k =0 ;k < person ; k++)
{
	if (fri[k][1]== 0)
	{
		start =k ;
		current =k;
		while(1)
		{
			//cout << current << endl;
			current = fri[current][0];
			fri[current][1]=1;
			if (current == start ){
			     	count++ ; 
				break ;
			}

		}
		
	}
			

} 
cout << count <<endl ;
}
