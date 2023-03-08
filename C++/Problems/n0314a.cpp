#include <bits/stdc++.h>
using namespace std;
long long n,k,t;
int main()
{
    freopen("n0314a.INP","r",stdin);
    freopen("n0314a.OUT","w",stdout);
    cin>>n;
    while(t<n){k++;t+=k;}
    if(t==n)cout<<k;
    else cout<<"NO";
    return 0;
}
