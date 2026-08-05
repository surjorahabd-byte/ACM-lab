#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    int minn = min(x,y);
    int maxx = max(x,y);
    for(int i = minn+1 ; i < maxx ;i++)
    {
        if(i%5 == 2 || i%5 == 3)
        {
            cout << i << endl;
        }
    }
    return 0;
}