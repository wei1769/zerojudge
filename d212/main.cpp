#include <bits/stdc++.h>
using namespace std ;
int main (){
long long int n;
long long int N[101]= {};
N[0] = 1 ;
N[1] = 1 ;
N[2] = 2 ;
for(int k = 3;k < 101;k++ ){
    N[k] = N[k-1]+N[k-2] ;
}
while(cin >> n) {
        cout <<N[n]<<endl ;

}
}
