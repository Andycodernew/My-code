#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long x = 1;
    for (int i = 0; i < n; i++)
    {
        x = lcm(x, a[i]);
    }
}