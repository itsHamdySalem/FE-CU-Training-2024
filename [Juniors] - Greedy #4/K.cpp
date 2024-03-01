#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> a(n);
    for (auto &it: a) cin >> it;
    vector<int> b(m);
    for (auto &it: b) cin >> it;
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n || j < m) {
        if (i < n && !a[i]) ans.push_back(a[i++]), ++k;
        else if (j < m && !b[j]) ans.push_back(b[j++]), ++k;
        else if (i < n && a[i] <= k) ans.push_back(a[i++]);
        else if (j < m && b[j] <= k) ans.push_back(b[j++]);
        else return void (cout << "-1\n");
    }
    for (auto &it: ans) cout << it << ' ';
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