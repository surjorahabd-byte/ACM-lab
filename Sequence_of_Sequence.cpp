#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    while (cin >> x)
    {
        cout << "Caso "<< x+1 <<": " << x+1 << " numero" << endl;
        for(int i=0 ; i<x+4; i++)
        {
            cout << i << endl;
        }
    }
    
    return 0;
}