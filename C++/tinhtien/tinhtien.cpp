#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("tinhtien.inp","r",stdin);
    freopen ("tinhtien.out","w",stdout);
    long long tongtien , soluong , dongia;
    cin >> soluong >> dongia;
    tongtien = soluong * dongia;
    if (tongtien > 100000)
        tongtien = tongtien * 80/100;
    cout << tongtien;
    return 0;
}
