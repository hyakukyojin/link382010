#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("chuso.inp","r",stdin);
    freopen("chuso.out","w",stdout);
    int a,hangchuc,hangdonvi;
    cin >> a;
    hangdonvi=a%10;
    hangchuc=a/10;
    cout << "Chu so hang chuc la:"<< hangchuc<< endl;
    cout << "Chu so hang don vi la:" << hangdonvi <<endl;
    return 0;
}
