#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    int n, T;
    cin >> n >> T;
    for (int i = 0, cur = 0, a; i < n; ++i) {
        cin >> a;
        if (2 * a == T) {
            cout << cur << ' ';
            cur ^= 1;
        } else if (2 * a < T) cout << "0 ";
        else cout << "1 ";
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve();
    }
    return 0;
}