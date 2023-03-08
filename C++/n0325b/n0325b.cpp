#include <bits/stdc++.h>
using namespace std;
long long n,d;
int main()
{
    freopen("n0325b.INP","r",stdin);
    freopen("n0325b.OUT","w",stdout);
    cin>>n;
    while(n%5==0){d++;n/=5;}
    cout<<d;
    return 0;
}
