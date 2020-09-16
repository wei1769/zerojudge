#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() 
{
    cout.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long time[1000010];
    for (int i = 0; i < 1000010; i++)
    {
       time[i] = 0;
    }
    
    long  x;
    cin >> x ;

    for (long i = 2; i <= x; i = i + 1)
    {
        if (i%2 == 0 && i != 2)
        i++;
        if(x%i == 0)
        {
            time[i]++;
            x = x/i ;
            
            i = i - 1;
        }
        if (x == 1)
        {
            break;
        }

    }
    long  k = 0;
    for (long i = 0; i <=1000000 ; i++)
    {
        
        if(time[i] == 1 )
        {
            
            if(k >0 )
            {
                cout<< "* "<<i << " ";
            }
            else
            {
                cout << i <<" ";
            }
            k++;
        }
        else if (time[i] > 1)
        {
           if(k >0 )
            {
                cout<< "* "<<i <<"^"<< time[i] << " ";
            }
            else
            {
                cout << i <<"^"<< time[i] <<" " ;
            } 
            k++;
        }
        
        
    }
    
    

}