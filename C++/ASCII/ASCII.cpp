#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("ASCII.inp","r",stdin);
 freopen("ASCII.out","w",stdout);
 string s;
 double tong=0,n;
 cin>>s;
 n=s.size();
 for(int i=0;i<n;i++)tong=tong+int(s[i]);
 cout<<fixed<<setprecision(1)<<tong/n;
 return 0;
}
