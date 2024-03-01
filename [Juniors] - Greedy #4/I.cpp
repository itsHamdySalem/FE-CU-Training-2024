#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve() {
    string s;
    cin >> s;
    int n = int(s.size());
    set<int> ans;
    for (int i = 0, las = n; i < n; ++i) {
        if (s[i] == '(') {
            for (int j = las - 1; j > i; j--) {
                if (s[j] == ')') {
                    las = j;
                    ans.insert(i);
                    ans.insert(j);
                    break;
                }
            }
        }
    }
    if (ans.empty()) return void (cout << "0\n");
    cout << "1\n" << ans.size() << '\n';
    for (auto &it: ans) cout << it + 1 << ' ';
    cout << '\n';
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