#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    int n;
    cin >> n;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        if ((a & 1) ^ (i & 1)) {
            cnt1 += (i & 1);
            cnt2 += (i & 1 ^ 1);
        }
    }
    cout << (cnt1 != cnt2 ? -1 : cnt1) << '\n';
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