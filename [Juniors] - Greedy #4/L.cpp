#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    int n, m;
    cin >> n >> m;
    int l = 1, r = n;
    for (int i = 0, x; i < m; ++i) {
        string s[4];
        for (auto &it : s) cin >> it;
        cin >> x;
        if (s[2][0] == 'r') l = max(l, x + 1);
        else r = min(r, x - 1);
    }
    cout << (r >= l ? r - l + 1 : -1) << '\n';
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