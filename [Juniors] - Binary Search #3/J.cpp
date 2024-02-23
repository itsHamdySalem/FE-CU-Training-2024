#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i) a[i] += a[i - 1];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        ll q;
        cin >> q;
        cout << int(lower_bound(a.begin(), a.end(), q) - a.begin()) + 1 << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int tc = 1;
//    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve();
    }
    return 0;
}