#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        double x, y;
        cin >> x >> y;
        if (x != 0 && y != 0)
        {
            double ann = x / y;
            cout <<fixed << setprecision(1) << ann << endl;
        }
        else if (x != 0 && y == 0)
        {
            cout << "divisao impossivel" << endl;
        }
        else if (x == 0 && y != 0)
        {
            cout << "0.0" << endl;
        }
    }

return 0;
}