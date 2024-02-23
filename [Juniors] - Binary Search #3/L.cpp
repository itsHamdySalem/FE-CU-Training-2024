#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it: a) cin >> it;
    sort(a.begin(), a.end());
    int ans = n;
    for (int l = 0, r; l < n; l++) {
        r = int(upper_bound(a.begin(), a.end(), 2 * a[l]) - a.begin());
        ans = min(ans, n - (r - l));
    }
    cout << ans << '\n';
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int tc = 1;
//    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve();
    }
    return 0;
}