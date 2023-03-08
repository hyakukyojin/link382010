#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("GIAY_IN.inp","r",stdin);
    freopen("GIAY_IN.out","w",stdout);
    long long k,a,dem=0;
    cin>>k;
    for(int i=1;i<=k;i++)
    {
        cin>>a;
        a=(a+1)/2;
        dem+=a;
    }
    cout<<dem;
    return 0;
}
