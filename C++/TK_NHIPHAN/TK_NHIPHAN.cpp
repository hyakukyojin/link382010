#include <bits/stdc++.h>
using namespace std;
int n,a[10000],p,x;
int tknp(int x)
{
    int l=1,r=n,pos=0,m;
    while(l<=r)
    {
        m=(l+r)/2;
        if(a[m]==x)return m;
        if(a[m]<x)l=m+1;else r=m-1;
    }
    return 0;
}
int main()
{
    freopen("TK_NHIPHAN.inp","r",stdin);
    freopen("TK_NHIPHAN.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    cin>>p;
    for(int i=1;i<=p;i++)
    {
        cin>>x;
        cout<<tknp(x)<<endl;
    }
    return 0;
}
