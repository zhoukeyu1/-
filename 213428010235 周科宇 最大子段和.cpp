#include <stdio.h>
#include<iostream>
#include<cstdlib>
using namespace std;

int MAX(int n, int* a)
{
    int  m, max1 = 0, sub = 0;
    for (m = 0; m < n; m++)
    {
        sub += a[m];
        if (sub < a[m])
        {
            sub = a[m];
        }
        if (max1 < sub)
        {
            max1 = sub;
        }
    }
    return max1;
}

int main()
{
    int i = 0, max = 0, n = 0, button = 0;
    int a[10];
    cin >> n;
    if (n <= 0)
    {
        cout << max;
        system("pause");
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
        {
            button = 1;
        }
    }
    if (button == 0)
    {
        max = 0;
    }
    else
    {
        max = MAX(n, a);
    }
    cout << max << endl;
    system("pause");
    return 0;
}