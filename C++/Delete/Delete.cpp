#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("Delete.inp","r",stdin);
    freopen("Delete.out","w",stdout);
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1;i<s.size();i++){
        if(s[i]!=s[i-1]) {
                s.erase(i-1,2);
                i=0;
        }
    }
    cout<<s.size();
    return 0;
}
