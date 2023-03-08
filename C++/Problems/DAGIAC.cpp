#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DAGIAC.inp","r",stdin);
    freopen("DAGIAC.out","w",stdout);
    int n;
    cin>>n;
    if(n<=2)cout<<-1;
    else cout<<180*(n-2);
    return 0;
}
