#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int c = 0;
    int r = 0;
    int s = 0;
    for (int i = 0; i < x; i++)
    {
        int y;
        char ch;
        while (cin >> y >> ch)
        {
            if (ch == 'C')
            {
                c = c + y;
            }
            else if (ch == 'R')
            {
                r = r + y;
            }
            else if (ch == 'S')
            {
                s = s + y;
            }
        }
    }
    int total = c+r+s;
    cout << "Total: "<< total << " cobaias" << endl;
    cout << "Total de coelhos: "<< c << endl;
    cout << "Total de ratos: "<< r << endl;
    cout << "Total de sapos: "<< s << endl;

    float persentage_c = ((float)c/total)*100;
    float persentage_r = ((float)r/total)*100;
    float persentage_s = ((float)s/total)*100;
    

    cout << "Percentual de coelhos: " << fixed << setprecision(2) << persentage_c << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << persentage_r << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << persentage_s << " %" << endl;
    return 0;
}