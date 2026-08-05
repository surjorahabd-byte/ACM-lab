#include<bits/stdc++.h>
using namespace std;
int main()
{
    double A,B,C;
    cin >> A >> B >> C;
    double Delta = (B*B) - (4*A*C);
    if(A == 0 || Delta < 0)
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        double R1 = (-B+sqrt(Delta))/(2*A);
        double R2 = (-B-sqrt(Delta))/(2*A);
        cout << "R1 = " << fixed << setprecision(5) << R1 << endl << "R2 = " << fixed << setprecision(5) << R2 << endl;
    }
    return 0;
}