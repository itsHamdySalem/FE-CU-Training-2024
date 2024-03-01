#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    int n;
    cin >> n;
    set<int> st;
    for (int i = 0, m; i < 2; ++i) {
        cin >> m;
        for (int j = 0, x; j < m; ++j) {
            cin >> x;
            st.insert(x);
        }
    }
    cout << (st.size() == n ? "I become the guy." : "Oh, my keyboard!");
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