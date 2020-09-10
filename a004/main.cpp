//
//  main.cpp
//  a004
//
//  Created by Wei on 2020/1/5.
//  Copyright © 2020 Wei. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std ;
    long long y = 0 ;
    while(cin>>y)
    {
        if(y%4==0 && y%100!=0)
        {
            cout << "閏年\n" ;
            continue; 
        }
        else if (y%400 == 0 )
        {
            cout <<"閏年\n";
            continue; 
        }
        else 
            cout <<"平年\n";
    }

}
