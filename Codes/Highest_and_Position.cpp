#include<bits/stdc++.h>
using namespace std;
int main()
{
    int max=0;
    int pos = 0;
    for (int i = 1; i <= 100; i++)
    {
        int a;
        cin >> a ;
        if(a>max)
        {
            max = a;
            pos = i;
        }
    }
    cout << max << endl << pos << endl;
    return 0;
}