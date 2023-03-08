#include <bits/stdc++.h>
using namespace std;
int n,ma;
int main()
{
    freopen("XAUTHUAN.inp","r",stdin);
    freopen("XAUTHUAN.out","w",stdout);
    string s,d="";
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')d=d+s[i];
    }
    if(d.size()>0)cout<<d;
    else cout<<"Failed";
    return 0;
}
