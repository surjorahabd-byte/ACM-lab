#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 5;
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    if(is_sorted(arr, arr+5))
    {
        cout << "C" << endl;
    }
    else if(is_sorted(arr,arr+5, greater<int>()))
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "N" << endl;
    }
    return 0;
}