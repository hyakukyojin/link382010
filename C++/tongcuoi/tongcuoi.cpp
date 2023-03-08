#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    freopen("TONGCUOI.inp","r",stdin);
    freopen("TONGCUOI.out","w",stdout);
    cin>>n;
    if(n>=10)cout<<n%100/10+n%10;
    else cout<<0;
    return 0;
}
