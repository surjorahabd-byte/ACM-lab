#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x)
    {
        for (int i = 1; i <= x; i++)
            if (i == 1)
            {
                cout << i;
            }
            else
            {
                cout << " " << i;
            }
        cout << endl;
        cin >> x;
    }
    return 0;
}