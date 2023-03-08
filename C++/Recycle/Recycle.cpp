#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("Recycle.inp","r",stdin);
 freopen("Recycle.out","w",stdout);
 string s;
 cin>>s;
 int d=1,dem=1;
 for(int i=1;i<s.size();i++)
 if(s[i]!=s[i-1]) {dem++;d=1;}
 else {d++;if(d>5){dem++;d=1;}}
 if(d>5) dem++;
 cout<<dem;
 return 0;
}
