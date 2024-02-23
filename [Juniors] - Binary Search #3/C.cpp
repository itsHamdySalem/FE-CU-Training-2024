#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    string t;
    cin >> t;
    int nb, ns, nc;
    cin >> nb >> ns >> nc;
    int pb, ps, pc;
    cin >> pb >> ps >> pc;
    ll r;
    cin >> r;
    int b = count(t.begin(), t.end(), 'B');
    int s = count(t.begin(), t.end(), 'S');
    int c = count(t.begin(), t.end(), 'C');
    ll mn = 0, mx = 1e14, ans = 0;
    while (mn <= mx) {
        ll md = (mn + mx) >> 1;
        if (r >= pb * max(b * md - nb, 0LL) + ps * max(s * md - ns, 0LL) + pc * max(c * md - nc, 0LL)) ans = md, mn = md + 1;
        else mx = md - 1;
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