#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    int change;
    int found = 0;
    int arr[6] = {2, 5, 10, 20, 50, 100};
    while (cin >> x >> y && x != 0 && y != 0)
    {
        change = y - x;
        if (change > 200 || change < 4)
        {
            cout << "impossible" << endl;
        }
        else
        {
            for (int i = 0; i < 6; i++)
            {
                int aa = change - arr[i];
                if (aa == 2 || aa == 5 || aa == 10 || aa == 20 || aa == 50 || aa == 100)
                {
                    found++;
                }
            }
            if (found == 0)
            {
                cout << "impossible" << endl;
            }
            else
            {
                cout << "possible" << endl;
            }
        }
    }
    return 0;
}
