#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DAGIAC.inp","r",stdin);
    freopen("DAGIAC.out","w",stdout);
    int n;
    cin>>n;
    if(n>2)cout<<(n-2)*180;
    else cout<<"-1";
    return 0;
}
