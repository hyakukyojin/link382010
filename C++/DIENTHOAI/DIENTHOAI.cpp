#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("DIENTHOAI.inp","r",stdin);
 freopen("DIENTHOAI.out","w",stdout);
 int n,d=0;
 cout<<"(";
 while(cin>>n)
 {
     cout<<n;
     d++;
     if(d==3)cout<<")";
     if(d==6)cout<<"-";
 }
 return 0;
}
