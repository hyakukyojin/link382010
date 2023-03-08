#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("souoc.inp","r",stdin);
    freopen ("souoc.out","w",stdout);
    int n;
    cin>>n;
    int souoc=0;
    for (int i=1;i<=n;i++)
        if (n%i==0)souoc++;
    cout<<souoc;
    return 0;
}
