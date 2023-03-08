#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("maytinh.inp","r",stdin);
    freopen("maytinh.out","w",stdout);
     long long a,b,n;
    cin>>a>>b>>n;
    if(a+b==n)cout<<"+";
    else if(a-b==n)cout<<"-";
    else if(a*b==n)cout<<"*";
    else if(a/b==n&&a%b==0)cout<<"/";
    else cout<<"NO";
    return 0;
}
