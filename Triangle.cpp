#include <bits/stdc++.h>
using namespace std;
int main()
{
    float A, B, C;
    cin >> A >> B >> C;

    if(((A + B) > C) && ((A + C) > B) && ((B + C) > A))
    {
        cout << fixed << setprecision(1) << "Perimetro = " << A+B+C << endl;
    }
    else
    {
        float area_of_trapizium = ((A + B) * C) / 2;
        cout <<  "Area = " << fixed << setprecision(1) << area_of_trapizium << endl;
    }

    
    return 0;
}
