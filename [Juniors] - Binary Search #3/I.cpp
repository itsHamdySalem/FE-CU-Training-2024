#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    int l = 1, r = max(a, b), ans = 1;
    while (l <= r) {
        int md = (l + r) >> 1;
        if (a / md && b / md && a / md + b / md >= n) ans = md, l = md + 1;
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