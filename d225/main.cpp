#include<bits/stdc++.h>
using namespace std ;

int GCD(int i,int j);
int main(){
	int G ,i,j,N ;

	while(cin >> N, N){
		G=0;
		for(i = 1;i <N;i++){
			for(j = 1; j< N;j++)
				G+=GCD(i,j);
		
		}
		cout << G<<'\n';
	}
}
int GCD(int i,int j ){
	if(i)
		return GCD(j%i,i);
	return j;
}
