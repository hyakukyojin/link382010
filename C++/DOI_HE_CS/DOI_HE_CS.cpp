#include <bits/stdc++.h>
using namespace std;
string doics(long long n,int cs)
{
    string xau="0123456789ABCDEF",s="";
    while(n>0)
    {
        int du=n%cs;
        s=xau[du]+s;
        n=n/cs;
    }
    return s;
}
int main()
{
    freopen("doi_he_cs.inp","r",stdin);
    freopen("doi_he_cs.out","w",stdout);
    int n;
    cin>>n;
    cout<<doics(n,16)<<endl<<n<<endl<<doics(n,8)<<endl;
    string s= doics(n,2);
    while(s.size()%4>0)s='0'+s;
    for(int i=0;i<s.size();i++)
    {
        if(i%4==0&&i>0)cout<<" ";
        cout<<s[i];
    }
    return 0;
}
