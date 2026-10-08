#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n < 2)
    {
        cout << 0;
        return 0;
    }
    int d = a[1] / a[0];
    if (a[1] % a[0] != 0)
    {
        cout << a[n - 1];
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (a[i] % a[i - 1] != 0 || a[i] / a[i - 1] != d)
        {
            cout << a[n - 1];
            return 0;
        }
    }
    cout << d;
}