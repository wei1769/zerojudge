#include<bits/stdc++.h>
using namespace std ;
int N,M ;
bool cmp(int f,int s)
{

   if(f%M != s%M)
        return (f%M < s%M);
    if((f+s)%2)
        return abs(f%2)>abs(s%2) ;
    if(f%2)
        return f>s ;
    return s>f ;
return f<s;
}
int main (){

    while (cin >>N>>M,N){
        int num[N+1];
        for (int i = 0 ; i<N;i++)
        {
            cin >>num[i];
        }
        sort(num,num+N,cmp);
        sort(num,num+N,cmp);
        cout << N <<" "<< M<<endl;
        for (int i = 0 ; i<N;i++)
        {
            cout << num[i]<<endl;
        }

    }

    cout <<"0 0";





}
