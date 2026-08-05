#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    while (cin >> x >> y)
    {
        long long result = 1;
        for (int i =  1; i <= x; i++)
        {
            result = result * i;
        }

        long long result2 = 1;
        
        for (int i = 1; i <= y; i++)
        {
            result2 = result2 * i;
        }
        cout << result+result2 << endl;
    }

    return 0;
}