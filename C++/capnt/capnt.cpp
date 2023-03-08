#include <bits/stdc++.h>
using namespace std;
bool soNguyenTo(int t)
{
	if (t < 2)return false;
	else
	{
		for(int i=2;i<=sqrt((float)t);i++)
		{
			if(t%i==0)return false;
		}
	}
	return true;
}
int main()
{
    freopen("capnt.inp","r",stdin);
    freopen("capnt.out","w",stdout);
    long long n,a,b,dem=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        int t=(a*a)-(b*b);
        if(soNguyenTo(t))dem++;
        else dem = 0;
    }
    cout<<dem;
    return 0;
}
