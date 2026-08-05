#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2 ;
    float x = x2-x1;
    float y = y2-y1;

    float distance = sqrt(x*x + y*y);
    cout << fixed << setprecision(4) << distance << endl; 
    return 0;
}