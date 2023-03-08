#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("NHAN.inp","r",stdin);
    freopen("NHAN.out","w",stdout);
    int a,b,c;
    cin>>a>>b>>c;
    if(a*b==c||b*c==a||c*a==b)cout<<"*";
    else cout<<"0";
    return 0;
}
