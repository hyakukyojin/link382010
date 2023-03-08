#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("tg_vuong_can.inp","r",stdin);
    freopen("tg_vuong_can.out","w",stdout);
    int n,k,p;
    cin>>n;
    while(n--)
    {
        cin>>k;
        k*=2;
        p=sqrt(k);
        if(p*(p+1)==k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
