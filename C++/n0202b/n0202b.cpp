#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("n0202b.INP","r",stdin);
 freopen("n0202b.OUT","w",stdout);
 long long n;
 cin>>n;
 if(n%10==n/10 && n>9 && n<100)cout<<"YES";
 else cout<<"NO";
 return 0;
}
