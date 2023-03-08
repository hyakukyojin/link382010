#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("ReactEdge.inp","r",stdin);
    freopen("ReactEdge.out","w",stdout);
    int a,b,c,k;
    cin>>a>>b>>c;
    k=sqrt(a*b*c);
    cout<<4*k*((a*b)+(b*c)+(c*a))/(a*b*c);
    return 0;
}
