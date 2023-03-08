#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("Doiso.inp","r",stdin);
 freopen("Doiso.out","w",stdout);
 string s;
 cin>>s;
 cout<<s[0];
 for(int i=1;i<s.size();i++)
 {

     if(s[i]=='9')cout<<0;
     else cout<<s;
 }
 return 0;
}
