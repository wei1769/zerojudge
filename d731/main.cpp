#include<bits/stdc++.h>
using namespace std ;
bool  cmp(long long int i,long int k){
return (abs(i)<abs(k));
}




int main(){
    vector <long long int> f ;

    int p ;
    cin >>p;
    while(p--){
        long long int t ;
        cin>>t;
        f.assign( t,0) ;
        for (int i = 0; i< t ;i++){
            cin >> f[i];

        }
        int tot = 1 ;
        sort(f.begin(),f.end(),cmp) ;
        for(int k = 0;k< t-1 ;k++)
        {
            if(f[k]*f[k+1]<0)
            {
                tot++;
            }
        }
        cout << tot << endl ;
    }
}
