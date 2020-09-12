#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    cout.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a=0 , b=0 , c =0 ,x1 = 0, x2 = 0 ;
    cin >> a >> b >> c ;
    int d = b*b - 4*a*c;
    if (d > 0)
    {
        x1 = (-b+sqrt(d))/(2*a) ;
        x2 = (-b-sqrt(d))/(2*a) ;
        if (x1 < x2)
        {
            int x = x1;
            x1 = x2;
            x2 = x;
        }
        
        cout << "Two different roots x1="<<x1<<" , x2="<<x2;
    }
    else if (d < 0)
    {
        cout << "No real root";
    }
    else if (d == 0)
    {
        cout << "Two same roots x="<< (0 - b)/(2*a) ;
    }
    
    }