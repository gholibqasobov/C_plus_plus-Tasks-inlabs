#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <cmath>
using namespace std;
int l[10000];
int gcd(int a, int b)
{
    int g = min(a, b); 
    while (g > 0) {
        if (a % g == 0 && b % g == 0) {
            break;
        }
        g--;
    }
    return g;
}

int main()
{
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(i == j)
            {
                break;
            }
            else
            {
                l[k] = gcd(a[i], a[j]);
                k++;
            }
        }
    }
    sort(l, l + k);

    cout << l[k - 1];
    return 0;
}
