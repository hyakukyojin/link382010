#include <bits/stdc++.h>
using namespace std;
bool ktnt(long long n)
{
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0||n%3==0) return false;
    for (long long i=5;i<=sqrt(n);i+=6)
        if(n%i==0||n%(i+2)==0) return false;
    return true;
}
long long bina(long long n)
{
    long long d1=0;
    while(n>0)
    {
        if(n%2==1) d1++;
        n/=2;
    }
    return d1;
}
int main()
{
    freopen("snt.inp","r",stdin);
    freopen("snt.out","w",stdout);
    long long n,m,de=0;
    cin>>n>>m;
    for(long long i=1;i<=n;i++){
        if( bina(i)==m && ktnt(i)) de++;
    }
    cout<<de;
    return 0;
}
