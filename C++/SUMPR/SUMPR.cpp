#include <bits/stdc++.h>
using namespace std;
bool ktnt(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    freopen("SUMPR.inp","r",stdin);
    freopen("SUMPR.out","w",stdout);
    long long n,t=0;
    cin>>n;
    if(ktnt(n)){
        cout<<n;
        return 0;
    }
    long long nt=2;
    while(n>1){
        if(n%nt==0)t=t+nt;
        while(n%nt==0)n=n/nt;
        nt++;
    }
    cout<<t;
    return 0;
}
