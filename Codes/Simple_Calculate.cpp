#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    float z;
    cin >> x >> y >> z;
    float salary1 = y*z;
    int a,b;
    float c;
    cin >> a >> b >> c;
    float salary2 = b*c;
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << salary1+salary2 << endl;
    return 0;
}