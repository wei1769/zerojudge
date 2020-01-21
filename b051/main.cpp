#include<bits/stdc++.h>
using namespace std ;
int cmp(string f,string s)
{
    if(s+f>f+s)
        return true;
    return false ;

}
int main (){
int c ;
while(cin >> c){
    string  s[c+1];
    for (int i = 0 ; i<c ; i++)
    {
        cin >> s[i];
    }
    //cout << s[0]<<endl ;
    sort(s,s+c,cmp);
    //cout << s[0]<<endl ;
    string res = "";
    for (int i = c-1 ; i>0 ; i-=2)
    {

        res = res +s[i] + s[i-1];
    }
    if(c%2)
        res += s[0];
    cout << res << endl ;
}


}
