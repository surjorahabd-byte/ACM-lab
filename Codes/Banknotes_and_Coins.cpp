#include <bits/stdc++.h>
using namespace std;
int main()
{
    float taka;
    cin >> taka;
    int nota = taka;
    float moeda1 = taka - nota;

    // for nota
    int note_100_taka = nota / 100;
    int reamin_taka = nota - (note_100_taka * 100);

    int note_50_taka = reamin_taka / 50;
    int reamin_taka1 = reamin_taka - (note_50_taka * 50);

    int note_20_taka = reamin_taka1 / 20;
    int reamin_taka2 = reamin_taka1 - (note_20_taka * 20);

    int note_10_taka = reamin_taka2 / 10;
    int reamin_taka3 = reamin_taka2 - (note_10_taka * 10);

    int note_5_taka = reamin_taka3 / 5;
    int reamin_taka4 = reamin_taka3 - (note_5_taka * 5);

    int note_2_taka = reamin_taka4 / 2;
    int reamin_taka6 = reamin_taka4 - (note_2_taka * 2);

    moeda1 = moeda1 + reamin_taka6;
    int moeda = round(moeda1 * 100);
    // for moeda

    int moeda_1_taka = moeda / 100;
    float reamin_taka10 = moeda - (moeda_1_taka * 100);

    int moeda_50_taka = reamin_taka10 / 50;
    float reamin_taka11 = reamin_taka10 - (moeda_50_taka * 50);

    int moeda_25_taka = reamin_taka11 / 25;
    float reamin_taka12 = reamin_taka11 - (moeda_25_taka * 25);

    int moeda_10_taka = reamin_taka12 / 10;
    float reamin_taka13 = reamin_taka12 - (moeda_10_taka * 10);

    int moeda_05_taka = reamin_taka13 / 5;
    float reamin_taka14 = reamin_taka13 - (moeda_05_taka * 5);

    int moeda_01_taka = reamin_taka14 / 1;
    float reamin_taka15 = reamin_taka14 - (moeda_01_taka * 1);

    cout << "NOTAS:" << endl;
    cout << note_100_taka << " nota(s) de R$ 100.00" << endl
         << note_50_taka << " nota(s) de R$ 50.00" << endl
         << note_20_taka << " nota(s) de R$ 20.00" << endl
         << note_10_taka << " nota(s) de R$ 10.00" << endl
         << note_5_taka << " nota(s) de R$ 5.00" << endl
         << note_2_taka << " nota(s) de R$ 2.00" << endl;

         cout << "MOEDAS:" << endl;
    cout << moeda_1_taka << " moeda(s) de R$ 1.00" << endl
         << moeda_50_taka << " moeda(s) de R$ 0.50" << endl
         << moeda_25_taka << " moeda(s) de R$ 0.25" << endl
         << moeda_10_taka << " moeda(s) de R$ 0.10" << endl
         << moeda_05_taka << " moeda(s) de R$ 0.05" << endl
         << moeda_01_taka << " moeda(s) de R$ 0.01" << endl;

    return 0;
}