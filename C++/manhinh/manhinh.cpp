#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("manhinh.inp","r",stdin);
    freopen("manhinh.out","w",stdout);
    int n,k,b;
    long long a;
    cin>>n>>k>>b;
    int tong=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        tong = tong + a[i];
    }
    int vt=b%n;
    if(vt==0)vt=n;
    int vg=k/n;
    int du = k%n;
    int kq = vg *tong;
    for(int i=vt;i<=vt+du;i++)
    {
        int v=i %n;
        if(n==0)v=n;
        kq=kq+a[v]
    }
    cout<<kq;
    return 0;
}
