#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> cnt(100);
    for (int i = 0, a; i < m; i++) {
        cin >> a;
        ++cnt[--a];
    }
    int l = 1, r = 100, ans = 0;
    while (l <= r) {
        int md = (l + r) >> 1, mx = 0;
        for (int i = 0; i < 100; i++) mx += cnt[i] / md;
        if (mx >= n) ans = md, l = md + 1;
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