#include <iostream>
using namespace std;
int main()
{
    freopen("HIEU_MAX.inp","r",stdin);
    freopen("HIEU_MAX.out","w",stdout);
    int n, i, M;
    cin >> n;
    int A[n], B[n];
    for (i = 0; i < n; i++) cin >> A[i];
    B[n - 1] = A[n - 1]; M = A[n - 1];
    for (i = n - 2; i > - 1; i--) {
        if (A[i] > M) M = A[i];
        B[i] = M;
    }
    for (i = 0; i < n; i++) {
        A[i] = B[i] - A[i];
    }
    M = A[0];
    for (i = 1; i < n; i++)
        if (A[i] > M) M = A[i];
    cout << M;
    return 0;
}
