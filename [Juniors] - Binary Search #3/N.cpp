#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    ll n, k;
    cin >> n >> k;
    if (n == 1) return void (cout << "0\n");
    if (n <= k) return void (cout << "1\n");
    --n, --k;
    if (n > k * (k + 1) / 2) return void (cout << "-1\n");
    ll l = 1, r = k;
    while (l < r) {
        ll md = (l + r) >> 1, sum = k * (k + 1) / 2 - md * (md - 1) / 2;
        if (sum == n) return void (cout << k - md + 1 << '\n');
        if (sum > n) l = md + 1;
        else r = md;
    }
    cout << k - l + 2 << '\n';
}

int main() {
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int tc = 1;
//    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve();
    }
    return 0;
}