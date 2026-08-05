#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    float z;
    cin >> x >> y >> z;
    cout << "NUMBER = " << x << endl;
    float salary = y*z;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;
    return 0;
}