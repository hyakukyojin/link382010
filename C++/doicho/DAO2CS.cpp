#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("DAO2CS.inp","r",stdin);
 freopen("DAO2CS.out","w",stdout);
 int a,hangchuc,hangdonvi;
 cin >> a;
 hangdonvi=a%10;
 hangchuc=a/10;
 swap(hangchuc,hangdonvi);
 cout<<hangchuc<<hangdonvi;
 return 0;
}
