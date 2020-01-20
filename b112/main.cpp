#include<bits/stdc++.h>
#pragma optimize GCC("Ofast")
using namespace std ;

int GCD(int i,int j);
int main(){
    cin.tie(0);
    cout.sync_with_stdio(false);
    cout.tie(0);
	int N ;


	while(cin >> N){
	    int to[N+1];
        for (int i = 0 ; i<N;i++)
            cin >> to[i];
        for (int i = N-1 ; i>0;i--)
        {

            to[i-1]=GCD(to[i],to[i-1]);

        }
        cout << to[0]<<endl ;
	}
}
int GCD(int i,int j ){
	if(j== 0 )
        return i;
    return GCD(j,i%j);

}
