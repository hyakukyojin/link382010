#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("BUTCHI.inp","r",stdin);
 freopen("BUTCHI.out","w",stdout);
 long long n,k;
 cin>>n>>k;
 if(n>=k)cout<<(k-1)/2;
 else if((n-k/2)>0)cout<<n-k/2;
 else cout<<0;
 return 0;
}
