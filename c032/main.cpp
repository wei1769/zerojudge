#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "PERFECTION OUTPUT"<<endl;
    int a ;
    while (cin >> a , a)
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
        if(s<a)
            cout << setw(5)<<a<<"  " << "DEFICIENT"<<"\n";
        else if (s == a)
            cout << setw(5)<<a<<"  " <<"PERFECT"<<endl ;
        else if (s > a )
            cout << setw(5)<<a<<"  " << "ABUNDANT"<<endl ;
    }
    cout <<"END OF OUTPUT";
}
