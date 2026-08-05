#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 20;
    int arr[x];
    int count = 0;
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    for (int i = x - 1; i >= 0; i--)
    {
        if (count < x)
        {
            cout << "N[" << count << "] = " << arr[i] << endl;
            count++;
        }
    }

    return 0;
}