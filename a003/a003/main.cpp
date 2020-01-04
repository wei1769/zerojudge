//
//  main.cpp
//  a003
//
//  Created by Wei on 2020/1/4.
//  Copyright © 2020 Wei. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std ;

int main(int argc, const char * argv[]) {
    // insert code here...
    int m ,d ;
    cin >> m >> d ;
    int s = (m*2+d)%3;
    if (s == 0) {
        cout << "普通\n";
    }
    else if (s == 1){
        cout << "吉\n" ;
    }
    else if (s == 2){
        cout << "大吉\n";
    }
    return 0;
}
