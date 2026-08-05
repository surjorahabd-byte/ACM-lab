#include <bits/stdc++.h>
using namespace std;
int main()
{
    float A, B, C;
    cin >> A >> B >> C;
    float area_of_rectanguled_traingle = (A * C) / 2;
    float redius_of_circle = 3.14159 * C * C;
    float area_of_trapizium = ((A + B) * C) / 2;
    float area_of_square = B * B;
    float area_of_rectangular = A * B;

    cout << fixed << setprecision(3);

    cout << "TRIANGULO: " << area_of_rectanguled_traingle << endl;
    cout << "CIRCULO: " << redius_of_circle << endl;
    cout << "TRAPEZIO: " << area_of_trapizium << endl;
    cout << "QUADRADO: " << area_of_square << endl;
    cout << "RETANGULO: " << area_of_rectangular << endl;
    return 0;
}