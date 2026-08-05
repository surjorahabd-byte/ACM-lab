#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < x; i++)
    {
        if (arr[i] == 0)
        {
            cout << "NULL" << endl;
        }
        else
        {
            if (arr[i] > 0)
            {
                if (arr[i] % 2 != 0)
                {
                    cout << "ODD POSITIVE" << endl;
                }
                else
                {
                    cout << "EVEN POSITIVE" << endl;
                }
            }
            else
            {
                if (arr[i] % 2 != 0)
                {
                    cout << "ODD NEGATIVE" << endl;
                }
                else
                {
                    cout << "EVEN NEGATIVE" << endl;
                }
            }
        }
    }
    return 0;
}
