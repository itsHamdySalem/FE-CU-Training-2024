#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int n, k;
vector<int> a, b;

bool ok(ll cnt) {
    ll x = k;
    for (int i = 0; i < n; i++) {
        if (b[i] / a[i] >= cnt) continue;
        if (x + (b[i] % a[i]) - (cnt - (b[i] / a[i])) * a[i] < 0) return false;
        x -= (cnt - (b[i] / a[i])) * a[i] - (b[i] % a[i]);
    }
    return true;
}

void solve() {
    cin >> n >> k;
    a.assign(n, 0);
    for (auto &it: a) cin >> it;
    b.assign(n, 0);
    for (auto &it: b) cin >> it;
    ll l = 0, r = 2e9, ans = 0;
    while (l <= r) {
        ll md = (l + r) >> 1;
        if (ok(md)) ans = md, l = md + 1;
        else r = md - 1;
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