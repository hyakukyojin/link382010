#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("sosanh.inp","r",stdin);
    freopen("sosanh.out","w",stdout);
    int n,m;
    cin>>n>>m;
    if(n==m)cout<<"=";
    else if(n>m)cout<<">";
    else if(n<m)cout<<"<";
    return 0;

}

