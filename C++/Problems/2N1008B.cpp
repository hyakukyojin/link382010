#include <bits/stdc++.h>
using namespace std;
bool ktnt(long long n)
{
    for(int i=2;i<=sqrt(n);i++)if(n%i==0)return false;
    return n>1;
}
long long n,d;
int main()
{
    freopen("2n1008b.INP","r",stdin);
    freopen("2n1008b.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(ktnt(i))d++;
        }
    }
    cout<<d;
    return 0;
}
