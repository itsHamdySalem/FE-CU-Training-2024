#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int n, s;
vector<int> a;

ll go(int k) {
    vector<ll> cur(n);
    for (int i = 0; i < n; i++) cur[i] = a[i] + 1LL * (i + 1) * k;
    sort(cur.begin(), cur.end());
    return accumulate(cur.begin(), cur.begin() + k, 0LL);
}

void solve() {
    cin >> n >> s;
    a.assign(n, 0);
    for (auto &it: a) cin >> it;
    int l = 0, r = n, cnt = 0;
    ll cost = 0;
    while (l <= r) {
        int md = (l + r) >> 1;
        ll cur = go(md);
        if (cur <= s) cnt = md, cost = cur, l = md + 1;
        else r = md - 1;
    }
    cout << cnt << ' ' << cost;
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