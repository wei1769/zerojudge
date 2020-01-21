#include <bits/stdc++.h>
using namespace std ;
int main(){
    int p1 , p2 , p3 ,p4 , p5 ,p6 ,tot;

    while (cin >>p1>>p2>>p3>>p4>>p5>>p6)
    {
        if(p1==p2==p3==p4==p5==p6==0)
            break;
        tot = p6+p5+p4+p3/4;
        p1 = max(0,p1-p5*11);
        if(p2>p4*5)
            p2 = max(0,p2-p4*5);
        else{
        p1 = max(0,p1-(p4*5 - p2)*4)

        }

        p3%=4;

    }
}
