#include <bits/stdc++.h>
using namespace std;
int main()
{
    double arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 3, greater<double>());
    double A = arr[0];
    double B = arr[1];
    double C = arr[2];

    // cout << A << " " << B << " " << C;

    double a, b, c, k;
    a = A * A;
    b = B * B;
    c = C * C;
    k = b + c;
    if (A >= (B + C))
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else
    {
        if (a == k)
        {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (a > k)
        {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (a < k)
        {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (A == B && B == C)
        {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        if (A == B && B != C || B == C && A != C || C == A && B != A)
        {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    return 0;
}