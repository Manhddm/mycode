#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main()
{
    int n;
    cin >> n;

    int res = 0;
    vector<int> a(n), f(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = +INF;
        f[i] = lower_bound(b.begin(), b.begin() + res + 1, a[i]) - b.begin();
        res = max(res, f[i] + 1);
        b[f[i]] = a[i];
    }

    cout << res;
    return 0;
}