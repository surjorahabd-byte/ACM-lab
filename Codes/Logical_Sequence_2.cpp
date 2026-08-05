#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    for (int i = 1; i <= y; i += x)
    {
        for (int j = i; j < i+x; j++)
        {
            if(j==i)
            {
                cout << i;
            }
            else
            {
                cout <<" " << j;
            }
        }
        cout << endl;
        
    }
    return 0;
}