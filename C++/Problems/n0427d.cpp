#include <bits/stdc++.h>
using namespace std;
long long n,d,k;
long long Fibo(int n)
{
    long long f1=1,f2=1,f3;
    for(int i=2;i<=n;i++)
    {
        f3=f1+f2;
        f1=f2;f2=f3;
    }
    return f1;
}
bool kt(long long n)
{
    for(int i=1;Fibo(i)<=n;i++)if(Fibo(i)==n)return 1;
    return 0;
}
long long fibo(long long n)
{
    if(kt(n))return n;
    int fb,fb1=1,fb2=1;
    while(fb1+fb2<n)
    {
       fb=fb1+fb2;
       fb2=fb1;
       fb1=fb;
    }
    return fb;
}
int main()
{
    freopen("n0427d.INP","r",stdin);
    freopen("n0427d.OUT","w",stdout);
    cin>>n;
    while(n>0)
    {
        k=fibo(n);
        d++;
        n=n-k;
    }
    cout<<d;
    return 0;
}
