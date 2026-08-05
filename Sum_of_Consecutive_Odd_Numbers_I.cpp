#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int ans = 0;
    int mins = min(x, y);
    int maxs = max(x, y);

    for (int i = mins + 1; i < maxs; i++)
    {
        if (i % 2 != 0)
        {

            ans = ans + i;
        }
    }
    cout << ans << endl;
    return 0;
}