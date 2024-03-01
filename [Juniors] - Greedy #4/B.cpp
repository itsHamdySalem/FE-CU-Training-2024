#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &it: a) cin >> it;
    sort(a.begin(), a.end());
    vector<int> b(n);
    for (auto &it: b) cin >> it;
    sort(b.rbegin(), b.rend());
    for (int i = 0; i < k && a[i] < b[i]; ++i) swap(a[i], b[i]);
    cout << accumulate(a.begin(), a.end(), 0LL) << '\n';
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