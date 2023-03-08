#include <bits/stdc++.h>
using namespace std;
long long n,l,r,d;
bool uoc(long long n)
{
    long long s=0,k=sqrt(n);
    for(int i=1;i<=k;i++)
    {
        if(n%i==0)
        {
            s+=i;
            if(i!=n/i)s+=n/i;
        }
    }
    if(s-n>n)return true;
    return false;
}
int main()
{
    freopen("n1016c.INP","r",stdin);
    freopen("n1016c.OUT","w",stdout);
    cin>>l>>r;
    for(int i=l;i<=r;i++){if(uoc(i))d++;}
    cout<<d;
    return 0;
}
