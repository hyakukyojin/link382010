#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("n0204b.INP","r",stdin);
 freopen("n0204b.OUT","w",stdout);
 long long a,b;
 cin>>a>>b;
 if((a>0&&b<0)||(a<0&&b>0))cout<<"YES";
 else cout<<"NO";
 return 0;
}
