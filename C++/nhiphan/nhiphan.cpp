#include <bits/stdc++.h>
using namespace std;
string doi(long b)
{
    string a="";
    while(b!=0)
    {
        a=a+char(b%10+48);
        b=b/10;
    }
    return a;
}
int main() {
    freopen("nhiphan.inp","r",stdin);
    freopen("nhiphan.out","w",stdout);
    long a,b,t=0;
    string c,d;
    cin>>a>>b;
    c=doi(nhiphan(a));
    d=doi(nhiphan(b));
    while(c.size()<d.size())c='0'+c;
    while(d.size()<c.size())d='0'+d;
    for(int i=1;i<=c.size();i++)
        if(c[i]!=d[i])t++;
    cout<<t;
    return 0;
}
