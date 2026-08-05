#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin >> x;
    if(x>=0 && x <= 400.00)
    {
        cout << "Novo salario: " << fixed << setprecision(2) << (x+(x*0.15)) << endl;
        cout << "Reajuste ganho: " << (x*0.15) << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else if(x>=400.01 && x <= 800.00)
    {
        cout << "Novo salario: " << fixed << setprecision(2) << (x+(x*0.12)) << endl;
        cout << "Reajuste ganho: " << (x*0.12) << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if(x>=800.01 && x <= 1200.00)
    {
        cout << "Novo salario: " << fixed << setprecision(2) << (x+(x*0.10)) << endl;
        cout << "Reajuste ganho: " << (x*0.10) << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if(x>=1200.01 && x <= 2000.00)
    {
        cout << "Novo salario: " << fixed << setprecision(2) << (x+(x*0.07)) << endl;
        cout << "Reajuste ganho: " << (x*0.07) << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else if(x>2000.00)
    {
        cout << "Novo salario: " << fixed << setprecision(2) << (x+(x*0.04)) << endl;
        cout << "Reajuste ganho: " << (x*0.04) << endl;
        cout << "Em percentual: 4 %" << endl;
    }
    return 0;
}
