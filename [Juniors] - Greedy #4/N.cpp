#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v) cin >> it;
    vector<vector<ll>> sum(2, vector<ll> (n));
    for (int i = 0; i < n; i++) {
        sum[0][i] = v[i];
        if (i) sum[0][i] += sum[0][i - 1];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        sum[1][i] = v[i];
        if (i) sum[1][i] += sum[1][i - 1];
    }
    int m;
    cin >> m;
    for (int i = 0, l, r, type; i < m; i++) {
        cin >> type >> l >> r;
        --type, --l, --r;
        cout << sum[type][r] - (l ? sum[type][l - 1] : 0) << '\n';
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