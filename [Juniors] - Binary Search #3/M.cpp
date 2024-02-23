#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

const int N = 2e5 + 3;

void solve() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> cnt(N);
    for (int i = 0, l, r; i < n; i++) {
        cin >> l >> r;
        ++cnt[l], --cnt[r + 1];
    }
    for (int i = 1; i < N; i++) cnt[i] += cnt[i - 1];
    for (int i = 1; i < N; i++) cnt[i] = (cnt[i] >= k) + cnt[i - 1];
    for (int i = 0, a, b; i < q; i++) {
        cin >> a >> b;
        cout << cnt[b] - cnt[a - 1] << '\n';
    }
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