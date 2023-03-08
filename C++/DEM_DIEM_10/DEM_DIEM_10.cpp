#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("DEM_DIEM_10.inp","r",stdin);
    freopen("DEM_DIEM_10.out","w",stdout);
    int n,d=0;double diem;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>diem;
        if(diem==10)d++;
    }
    cout<<d;
    return 0;
}
