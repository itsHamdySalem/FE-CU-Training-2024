#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    int n, k;
    cin >> n >> k;
    set<ll> st;
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        st.insert(a);
    }
    int cnt = 0;
    while (!st.empty()) {
        ++cnt;
        ll x = *st.begin();
        st.erase(st.begin());
        if (st.find(1LL * x * k) != st.end()) st.erase(st.find(1LL * x * k));
    }
    cout << cnt << '\n';
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