#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for (auto &it: a) cin >> it;
    vector<pair<pair<int,int>,int>> op(m);
    for (auto &[p, d]: op) {
        cin >> p.first >> p.second >> d;
        --p.first, --p.second;
    }
    vector<ll> cnt(m + 1);
    for (int i = 0, x, y; i < k; i++) {
        cin >> x >> y;
        --x, --y;
        ++cnt[x], --cnt[y + 1];
    }
    for (int i = 1; i < m; i++) cnt[i] += cnt[i - 1];
    vector<ll> sum(n + 1);
    for (int i = 0; i < m; i++) {
        sum[op[i].first.first] += 1LL * cnt[i] * op[i].second;
        sum[op[i].first.second + 1] -= 1LL * cnt[i] * op[i].second;
    }
    for (int i = 1; i < n; i++) sum[i] += sum[i - 1];
    for (int i = 0; i < n; i++) cout << a[i] + sum[i] << ' ';
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