#include <bits/stdc++.h>
using namespace std;

int main()
{
    int dd, mm, yy;
    char ch;
    cin >> dd >> ch >> mm >> ch >> yy;
    cout << setw(2) << setfill('0') << mm << "/" << setw(2) << setfill('0') << dd << "/" << setw(2) << setfill('0') << yy << endl;
    cout << setw(2) << setfill('0') << yy << "/" << setw(2) << setfill('0') << mm << "/" << setw(2) << setfill('0') << dd << endl;
    cout << setw(2) << setfill('0') << dd << "-" << setw(2) << setfill('0') << mm << "-" << setw(2) << setfill('0') << yy << endl;
    return 0;
}