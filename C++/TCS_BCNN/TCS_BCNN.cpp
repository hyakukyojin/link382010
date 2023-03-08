#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("TCS_BCNN.inp","r",stdin);
    freopen("TCS_BCNN.out","w",stdout);
    int n;
    cin>>n;
    long long b=1,tcs=0,u,cs;
    while(n>0)
    {
        cs= n%10;
        if(cs>0)
        {
            tcs = tcs +cs ;
            u=__gcd(cs,b);
            b=b*cs/u;

        }
        n=n/10;

    }
    cout<<tcs<<endl<<b;
    return 0;
}
