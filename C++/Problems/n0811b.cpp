#include <bits/stdc++.h>
using namespace std;
long long a,b,d;
bool tbp(long long n)
{
    int cs,s=0;
    while(n>0)
    {
        cs=n%10;
        n=n/10;
        s=s+cs*cs;
    }
    return s%2==0;
}
int main()
{
    freopen("n0811b.INP","r",stdin);
    freopen("n0811b.OUT","w",stdout);
    cin>>a>>b;
    for(int i=a;i<=b;i++)if(tbp(i))d++;
    cout<<d;
    return 0;
}
