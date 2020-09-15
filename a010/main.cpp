#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() 
{
    vector<long > time(1000010, 0);
    long  x;
    cin >> x;
    long  y = x ;
    for (long i = 2; i <= x; i = i + 1)
    {
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
    for (long i = 0; i <=y ; i++)
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