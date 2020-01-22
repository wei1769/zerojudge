#include<bits/stdc++.h>
using namespace std ;
int main (){
int t ;
cin >> t ;
while (t--) {
    int p ;
    cin >> p ;
    int va[p+10];
    for (int i = 0; i< p ;i++)
    {
        cin >> va[i];
    }
    long long int a = 0,b=  0 ,m ;

    sort(va,va+p);

        for(int k = 0 ; k< p ; k++)
        {
            if (a <= b)
                a = a + va[p-k-1];
            else
                b = b + va[p-k-1];
        }



        //cout << a<<'\t'<<b<<endl ;
        m = abs(a-b);
cout << m<< endl ;
}


}
