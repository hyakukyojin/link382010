#include <bits/stdc++.h>
using namespace std;
int giaiThua(int n)
{
    if (n == 1)
        return 1;
    return n * giaiThua(n - 1);
}
int main()
{
    freopen("GTNT.inp","r",stdin);
    freopen("GTNT.out","w",stdout);
    int n;
    cin>>n;
    int a;
    a=giaiThua(n);
    int dem;

    for(int i=2;i<= a;i++){
        dem = 0;
        while(a%i==0){
            dem++;
            a/=i;
        }
        if(dem){
            cout<<i;
            if(dem>1) cout<<"^"<<dem;
            if(n>i){
                cout<<"*";
            }
        }
    }
    return 0;
}
