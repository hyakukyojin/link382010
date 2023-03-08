#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("maxmin.inp","r",stdin);
    freopen("maxmin.out","w",stdout);
    int n,somin=0,somax=0,a[1000];
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    cout<<a[0]+a[n-1]<<endl;
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
