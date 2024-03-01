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
    vector<int> p;
    for (int i = 0, a; i < 2 * n; ++i) {
        cin >> a;
        if (st.find(a) == st.end()) p.push_back(a), st.insert(a);
    }
    for (auto &it: p) cout << it << ' ';
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