#include <bits/stdc++.h>
using namespace std;
bool ktnt(long long n)
{
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0) return false;
    return true;
}
long long tcs(long long n)
{
    int t=0;
    while(n>0)
    {
        t=t+n%10;
        n=n/10;
    }
    return t;
}
int main()
{
 freopen("TCSNT.inp","r",stdin);
 freopen("TCSNT.out","w",stdout);
 long long n,t=0;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
     if(ktnt(i)) t=t+tcs(i);
 }
 cout<<t;
 return 0;
}
