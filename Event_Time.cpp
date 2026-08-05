#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w, x, y, z;
    char c[50];
    char ch;
    cin >> c >> w >> ch >> x >> ch >> y >> ch >> z;

    int w1, x1, y1, z1;
    char c1[50];
    char ch1;
    cin >> c1 >> w1 >> ch1 >> x1 >> ch1 >> y1 >> ch1 >> z1;

    // For d1
    int total;
    int wt = (((w * 24) * 60) * 60);
    int xt = ((x * 60) * 60);
    int yt = (y * 60);
    total = wt + xt + yt + z;

    // for d2
    int total1;
    int wt1 = (((w1 * 24) * 60) * 60);
    int xt1 = ((x1 * 60) * 60);
    int yt1 = (y1 * 60);
    total1 = wt1 + xt1 + yt1 + z1;

    int sec_remain = total1 - total;

    int rmy = sec_remain / 60;
    int answer_z = (sec_remain - (rmy * 60));

    int rmx = rmy / 60;
    int answer_y = (rmy - (rmx * 60));

    int answer_w = rmx / 24;
    int answer_x = (rmx - (answer_w * 24));

    cout << answer_w << " dia(s)" << endl
         << answer_x << " hora(s)" << endl
         << answer_y << " minuto(s)" << endl
         << answer_z << " segundo(s)" << endl;
    return 0;
}