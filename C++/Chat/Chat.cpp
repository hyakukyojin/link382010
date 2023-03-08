#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("Chat.inp","r",stdin);
 freopen("Chat.out","w",stdout);
 double l1,r1,l2,r2,k;
 int d=0;
 cin>>l1>>r1>>l2>>r2>>k;
 for(int i=l1;i<=r1;i++)
 if(i>=l2&&i<=r2&&i!=k) d++;
 cout<<d;
 return 0;
}
