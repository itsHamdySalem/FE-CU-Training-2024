#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    int l, r, x, y, k;
    cin >> l >> r >> x >> y >> k;
    for (int a = max(l, k); a <= r; ++a) {
        if (a % k) continue;
        if (x <= (a / k) && (a / k) <= y) return void (cout << "YES\n");
    }
    cout << "NO\n";
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