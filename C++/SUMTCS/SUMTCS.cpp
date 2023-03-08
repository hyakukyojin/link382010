#include <bits/stdc++.h>
using namespace std;
int tcs(int n)
{
    int s=0;
    while(n>0)
    {
        s=s+n%10;
        n=n/10;
    }
    return s;
}
int main()
{
    freopen("SUMTCS.inp","r",stdin);
    freopen("SUMTCS.out","w",stdout);
    int n,t=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)t=t+tcs(i);
    }
    cout<<t;
    return 0;
}
