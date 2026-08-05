#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y;
    while (cin >> x>> y)
    {
        long long int ans = x-y;
        if(ans < 0)
        {
            cout << (ans*-1) << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    
    return 0;
}