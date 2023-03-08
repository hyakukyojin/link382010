#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("Episode.inp","r",stdin);
 freopen("Episode.out","w",stdout);
 int n,so;
 string d;
 memset(d,0,sizeof(d));
 cin>>n;
 for(int i=1;i<=n;i++)
 {
 cin>>so;
 d[so]=true;
 }
 for(int i=1;i<=n;i++)
 if(!d[i]) {cout<<i;break;}
 return 0;
}
