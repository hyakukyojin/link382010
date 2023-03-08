#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("HISO.inp","r",stdin);
 freopen("HISO.out","w",stdout);
 int n,kq;
    cin>>n;
    int a[n],b[n];
    for (int i=0;i<n;i++) cin>>a[i];
    b[n-1]=a[n-1]; kq=a[n-1];
    for (int i=n-2;i>=0;i--) {
        if (a[i]>kq) kq=a[i];
        b[i]=kq;
    }
    for (int i=0;i<n;i++) a[i]=b[i]-a[i];
    for (int i=1;i<n;i++)
        if (a[0]<a[i]) a[0]=a[i];
    cout<<a[0];
 return 0;
}
