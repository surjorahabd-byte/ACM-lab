#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,l,s;
    int count = 0;
    while(cin >> r >> l >> s && r!= 0)
    {
        count++;
        int area = 3*r*r;
        cout << area << endl;

        int area_pizza = l*s;
        cout << area_pizza << endl;
        if(area > area_pizza)
        {
            cout << "Pizza " << count << " fits on the table." << endl;
        }
        else
        {
            cout << "Pizza " << count << " does not fits on the table." << endl;
        }
    }
    return 0;
}