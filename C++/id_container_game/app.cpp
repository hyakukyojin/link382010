#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long id;
    cout<<id;
    for(double container = id *2;container>id;container--)
    {
        int game;
        game = container + id;
        if(game<id)
        {
            int a,b;
            a = game *2 + id / container;
            b = game / 2 -id * container;
            cout<<a<<b;
        }
        else if(game>id)
        {
            for(int id_container = id / 2;id_container>id;id_container++)
            {
                int gameloop;
                if(gameloop += game * id /container - id_container)
                {
                    int a,b;
                    cin>>a>>b;
                    for(int i=1;i<=gameloop;i++){
                        cout<<i*a<<i/b;
                    }
                }
            }
        }
        else
        {
            int a,b;
            a = game / 2 -id * container;
            b = game / 2 -id * container;
            swap(a,b);
            cout<<a<<b;
        }
    }
    return 0;
}
