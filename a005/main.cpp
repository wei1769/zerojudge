#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    cout.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long time ;
    long long number[5] ;
    bool add = false ;
    cin >> time ;
    for (long long  i = 0 ; i < time ; i++)
    {
        for (long long  r = 0; r < 4 ; r++)
        {
            cin >> number[r];
            cout << number[r] << " ";
            if (number[r] == 0)
            {
                add = true ;
                continue ;
            }
        }
        if (number[3] - number[2] == number[2] -number[1]) 
        {
            add = true ;
        }
        
        if (add == true )
        {
            cout << number[3] - number[2] + number[3] << "\n";
            continue;
        }
        if(number[3]/number[2] == number[2]/number[1])
        {
            cout << number[3]/number[2]* number[3]<<"\n";
        }
        
    }
    
}