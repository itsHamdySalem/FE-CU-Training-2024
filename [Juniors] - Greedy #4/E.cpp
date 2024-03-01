#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    int n;
    cin >> n;
    vector<int> s(n);
    for (auto &it: s) cin >> it;
    sort(s.begin(), s.end());
    int mn = 1e9;
    for (int i = 1; i < n; i++) mn = min(mn, s[i] - s[i - 1]);
    cout << mn << '\n';
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