#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N[1000];
    for (int i = 0; i < 1000;)
    {
        if (i < 999)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << "N[" << i << "] = " << j << endl;
                i++;
            }
        }
    }
    return 0;
}