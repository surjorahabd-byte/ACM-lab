#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    float cc = (int)(x * x * x);
    float dd = (int)4/3;

    float v = (4 * (3.1415 * cc))/3;


    int ballon = y/(float)v;
    cout << ballon << endl;
    return 0;
}