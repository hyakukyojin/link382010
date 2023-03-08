#include <bits/stdc++.h>
using namespace std;
long long n;
int tonguoc(int n)
{
    int s=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)s=s+i;
    }
    return s;
}
int main()
{
    freopen("HOANTHIEN.inp","r",stdin);
    freopen("HOANTHIEN.out","w",stdout);
    cin>>n;
    cout<<abs(n-tonguoc(n));
    return 0;
}
