#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    
    while(cin >> x)
    {
        float arr[x];
        float min = 100.00;
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < x; i++)
        {
            if(arr[i] < min)
            {
                min = arr[i];
            }
        }
        cout << min << endl;

    }
    return 0;
}