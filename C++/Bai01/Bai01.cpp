#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Bai01.inp","r",stdin);
    freopen("Bai01.out","w",stdout);
    long long n;
    cin>>n;
    long long ht=n/100,hc=n/10%10,hdv=n%10;
    long long ma = max(ht,max(hc,hdv))*10,mi = min(ht,min(ht,hdv));
    cout<<ma+mi;
    return 0;
}
