#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("TENSDIGIT.inp","r",stdin);
    freopen("TENSDIGIT.out","w",stdout);
    int n,a;
    cin>>n;
    a=n/10%10;
    if(n>=10) cout<<a; else cout<<-1;
    return 0;
}
