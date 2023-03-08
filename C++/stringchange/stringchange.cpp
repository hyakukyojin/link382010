#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("stringchange.inp","r",stdin);
 freopen("stringchange.out","w",stdout);
 int n,k,so,dem=0;bool a[26];
 for(int i=1;i<=26;i++) a[i]=false;
 string s;
 cin>>s>>k;n=s.length();
 for(int i=0;i<n;i++)
 {
 so=int(s[i]);
 so=so-96;
 a[so]=true;
 }
 so=0;
 for(int i=1;i<=26;i++)
 if(a[i]) dem++;
 if(n<k) cout<<"impossible";
 else if(dem==k) cout<<0;
 else cout<<k-dem;
 return 0;
}
