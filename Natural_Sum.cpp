#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y;
    cin >> x >> y;
    long long int pro = (x*(x-1))/2;
    long long int next = (y * (y+1))/2;
    long long int total = next-pro;
    cout << total << endl;
    return 0;
}