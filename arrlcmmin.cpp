#include <bits/stdc++.h>
using namespace std;

int g(int a, int b)
{
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int l(int a, int b)
{
    return a / g(a, b) * b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int res = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        int x = l(a[i], a[i + 1]);
        if (x < res)
            res = x;
    }
    cout << res;
}