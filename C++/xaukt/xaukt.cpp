#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("xaukt.inp","r",stdin);
    freopen("xaukt.out","w",stdout);
    string n;
    getline(cin,n);
    int s,demchuso=0,demchu=0,demcach=0;
    s=n.size();
    for(int i=0;i<=s;i++)
    {
        if(n[i]>='0' && n[i]<='9') demchuso++;
        if(n[i]==' ')demcach++;
    }

    cout<<s-demchuso-demcach<<endl<<demchuso<<endl<<demcach;
    return 0;
}
