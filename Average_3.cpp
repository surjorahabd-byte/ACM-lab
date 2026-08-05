#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n1, n2, n3, n4, a1;
    if (cin >> n1 >> n2 >> n3 >> n4)
    {
        float total = n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1;
        float avg = total / 10.0;
        
        cout << fixed << setprecision(1);
        cout << "Media: " << avg << endl;
        
        if (avg >= 7.00)
        {
            cout << "Aluno aprovado." << endl;
        }
        else if (avg < 5.00)
        {
            cout << "Aluno reprovado." << endl;
        }
        else
        {
            cout << "Aluno em exame." << endl;
            
            if (cin >> a1)
            {
                float midea = (avg + a1) / 2.0;
                
                cout << "Nota do exame: " << a1 << endl;
                
                if (a1 >= 5.00)
                {
                    cout << "Aluno aprovado." << endl;
                }
                else
                {
                    cout << "Aluno reprovado." << endl;
                } 
                
                cout << "Media final: " << midea << endl;
            }
        } 
    }
    
    return 0;
}