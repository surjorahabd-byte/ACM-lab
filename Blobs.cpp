#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        double x;
        cin >> x;
        int days = 0;
        while(x > 1.00)
        {
            x /= 2.00;
            days++;
        }
        cout << days << " dias" << endl;
    }
    
    return 0;
}
