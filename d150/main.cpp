#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >>t ;
    while(t--){
        int price;
        cin>>price;
        int a[price];
        for(int c = 0;c<price;c++){

            cin >> a[c];
            //cout << a[c];

        }
        //cout <<a[0]<<endl;
        sort(a,a+price);
        //cout <<a[0]<<endl;
        int cost  = 0;
        for(int i = price -3;i>=0;i-=3)
            cost+=a[i];
        cout<<cost<<'\n';

    }



}
