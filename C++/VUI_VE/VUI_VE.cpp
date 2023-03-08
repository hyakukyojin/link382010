#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("VUI_VE.inp","r",stdin);
    freopen("VUI_VE.out","w",stdout);
    long long k,a;
    cin>>k;
    for(int i=1;i<=k;i++)
    {
        cin>>a;
        if(a%2==0)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}
