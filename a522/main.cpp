#include<bits/stdc++.h>
using namespace std ;
int main(){
int t ;
cin >>t ;
while(t--){
    int n,len ;
    cin>>len>>n;
    int f[22];
    for(int i = 1;i<=n;i++){
        cin >> f[i];

    }
    int c[1001]= {0};

    c[0] =1 ;
    for(int i = 1 ; i <= n  ;i++){
        for(int k = len ; k>= f[i];k--){
            if(c[k-f[i]])
                c[k] = 1;

        }
    }
    if(c[len])
        cout <<"YES"<<endl ;
    else
        cout<<"NO"<<endl ;
}


}
