#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int year = x/365;
    int month = (x-(year*365)) / 30 ;
    int days = (x-((year*365)+(month*30)));

    cout << year << " ano(s)" << endl << month << " mes(es)" << endl << days << " dia(s)" << endl;
    return 0;
}