#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin >> y;
    int x = 10;
    int arr[x];
    cout << "N[0] = " << y << endl;
    for (int i = 1; i < x; i++)
    {
        cout << "N[" << i << "] = " << y* pow(2,i) << endl;
    }
    
    return 0;
}