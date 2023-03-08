#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("sonha.inp","r",stdin);
    freopen("sonha.out","w",stdout);
    int n;
    cin>>n;
    if(n%2==0) n--;
    cout<<(1+n)*((n-1)/2+1)/2;
    return 0;
}
