#include <bits/stdc++.h>
using namespace std;
double n;
int main()
{
    freopen("NHAPSO.inp","r",stdin);
    freopen("NHAPSO.out","w",stdout);
    cin>>n;
    int k=int(n);
    if(n!=k)cout<<k;
    else if(k%2==0)cout<<n<<" la so chan";
     else cout<<k<<" la so le";
    return 0;
}
