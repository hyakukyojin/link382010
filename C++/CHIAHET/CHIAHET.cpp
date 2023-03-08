#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("NHAN.inp","r",stdin);
    freopen("NHAN.out","w",stdout);
    int a,b;
    cin>>a>>b;
    int t=a/b;
    if(t%2==0)cout<<"YES";
    else if (t%1==t)cout<<"YES";
    else cout<<"NO";
    return 0;
}
