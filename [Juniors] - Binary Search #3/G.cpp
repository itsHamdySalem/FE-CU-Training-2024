#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    int n, d;
    cin >> n >> d;
    vector<pair<int,int>> a(n);
    for (auto &[m, s]: a) cin >> m >> s;
    sort(a.begin(), a.end());
    vector<ll> pfx(n);
    for (int i = 0; i < n; i++) {
        pfx[i] = a[i].second;
        if (i) pfx[i] += pfx[i - 1];
    }
    ll ans = 0;
    for (int l = 0, r; l < n; l++) {
        r = int(lower_bound(a.begin(), a.end(), make_pair(a[l].first + d, 0)) - a.begin()) - 1;
        ans = max(ans, pfx[r] - (l ? pfx[l - 1]: 0));
    }
    cout << ans << '\n';
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