#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("cacmua.inp","r",stdin);
 freopen("cacmua.out","w",stdout);
 int n;
 cin>>n;
 if(n==2||n==3||n==4)cout<<"Mua xuan";
 else if(n==5||n==6||n==7)cout<<"Mua ha";
 else if(n==8||n==9||n==10) cout<<"Mua thu";
 else if(n==11||n==12||n==1) cout<<"Mua dong";
 return 0;
}
