#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    int n, T;
    cin >> n >> T;
    vector<int> a(n), t(n);
    for (int i = 0; i < n; i++) cin >> a[i] >> t[i];
    vector<int> ans;
    int l = 0, r = n;
    while (l < r) {
        int md = (l + r + 1) >> 1;
        vector<pair<int,int>> v;
        for (int i = 0; i < n; i++) if (a[i] >= md) v.emplace_back(t[i], i);
        sort(v.begin(), v.end());
        bool ok = false;
        if (v.size() >= md) {
            int sum = 0;
            for (int i = 0; i < md; i++) sum += v[i].first;
            if (sum <= T) {
                ok = true;
                ans.resize(md);
                for (int i = 0; i < md; i++) ans[i] = v[i].second;
            }
        }
        if (ok) l = md;
        else r = md - 1;
    }
    cout << ans.size() << '\n';
    cout << ans.size() << '\n';
    for (auto &it: ans) cout << it + 1 << ' ';
    cout << '\n';
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