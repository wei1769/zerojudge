#include <bits/stdc++.h>

using namespace std;
int aa(int a);
int main()
{
    //cout << "PERFECTION OUTPUT"<<endl;
    int a ;
    while (cin >> a,a )
    {
        if(aa(a) == a)
            cout << "="<<a<<endl;


       else if (a == aa(aa(a)))
        cout <<aa(a)<<endl;
       else
        cout << 0<<endl;


    }
    //cout <<"END OF OUTPUT";
}
int aa(int a)
{
            int f , s = a>1 ;
        for(f = 2; f*f<a;f++)
        {
            if (a%f == 0)
            {
                s= s+ f + a/f ;
                //cout << "f    "<<f<<endl ;
               // cout << "s    "<<s<<endl ;
            }
        }
        if(a == f*f)
            s= s+f;
        return s;
}
