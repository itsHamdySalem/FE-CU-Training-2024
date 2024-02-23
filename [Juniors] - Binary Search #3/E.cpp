#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    for (auto &it: a) cin >> it;
    ll cnt = 0;
    for (int l = 0, r; l + 2 < n; l++) {
        r = int(upper_bound(a.begin(), a.end(), a[l] + d) - a.begin()) - 1;
        cnt += (1LL * (r - l) * (r - l - 1)) >> 1;
    }
    cout << cnt << '\n';
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