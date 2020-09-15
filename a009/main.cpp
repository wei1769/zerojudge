#include <iostream>
#include <string>
using namespace std;
int main() {
    cout.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a ;
    cin >> a ;
    for (int i  =0 ;i < a.size();i++)
    {
        cout << char(a[i]-7);
    }
}