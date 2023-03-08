#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("KTDX.inp","r",stdin);
 freopen("KTDX.out","w",stdout);
 int n, tmp;
 cin>>n;
    int res=0;
    while(n > 0){
        tmp = n%10;
        res = res*10+tmp;
        n = n/10;
    }
    if(res==n)cout<<"YES";
    else cout<<"NO";
 return 0;
}


