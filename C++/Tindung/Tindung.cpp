#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("Tindung.inp","r",stdin);
 freopen("Tindung.out","w",stdout);
 string s;
 getline(cin,s);
 int n=s.size();
 if(n<4){cout<<s;return 0;}
 s.replace(0,n-4,n-4,'#');
 cout<<s;
 return 0;
}
