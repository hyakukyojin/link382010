#include <bits/stdc++.h>

using namespace std;
bool ktcp(int n)
{
    int k=sqrt(n);
    return n==k*k;
}
int main()
{
    freopen("ktsocp.inp","r",stdin);
    freopen("ktsocp.out","w",stdout);
    long long n;
    cin>>n;
    if(ktcp(n))cout<<"Co";
    else cout<<"Khong";
    return 0;
}
