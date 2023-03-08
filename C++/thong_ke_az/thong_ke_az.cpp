#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("thong_ke_az.inp","r",stdin);
    freopen("Thong_ke_az.out","w",stdout);
    string s;
    string f;
    getline(cin,s);
    for(long long i=0;i<s.size();i++)
        if(s[i]>='a'&&s[i]<='z')
        {int ma=s[i]-97;f[ma]++;}
    for(long long i=0;i<26;i++)
        if(f[i]>0)cout<<char(i+97)<<": "<<f[i]<<endl;
    return 0;
}

