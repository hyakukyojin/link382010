#include <bits/stdc++.h>

using namespace std;
bool ktnt(int n)
{
    if(n==2) return 1;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)return 0;
    return 1;
}
int main()
{
    freopen("vietsont.inp","r",stdin);
    freopen("vietsont.out","w",stdout);
    int n;
    cin>>n;
    for(int k=2;k<=n;k++)
        if(ktnt(k))cout<<k<<" ";
    return 0;
}
