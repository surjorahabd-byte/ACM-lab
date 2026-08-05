#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    while ( x > 0 && y > 0)
    {
        int ans = 0;
        int mins = min(x, y);
        int maxs = max(x, y);
        for (int i = mins; i < maxs + 1; i++)
        {
            cout << i << " ";
            ans = ans + i;
        }
        cout << "Sum=" << ans << endl;
        cin >> x >> y;
    }

    return 0;
}