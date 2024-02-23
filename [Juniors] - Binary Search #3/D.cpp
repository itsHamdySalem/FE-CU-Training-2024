#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

map<char,int> dx = {{'U', 0}, {'D', 0}, {'L', -1}, {'R', 1}};
map<char,int> dy = {{'U', 1}, {'D', -1}, {'L', 0}, {'R', 0}};

string s;
int n, x, y;

bool ok(int xx, int yy, int len) {
    int cnt = (abs(x - xx) + abs(y - yy));
    if ((cnt & 1) == (len & 1)) return len >= cnt;
    return false;
}

bool go(int len) {
    int xx = 0, yy = 0;
    for (int i = len; i < n; i++) xx += dx[s[i]], yy += dy[s[i]];
    for (int l = 0, r = len; r < n; l++, r++) {
        if (ok(xx, yy, len)) return true;
        xx += dx[s[l]], yy += dy[s[l]];
        xx -= dx[s[r]], yy -= dy[s[r]];
    }
    return ok(xx, yy, len);
}

void solve() {
    cin >> n >> s >> x >> y;
    if (n < abs(x) + abs(y)) return void (cout << "-1\n");
    int l = 0, r = n, ans = -1;
    while (l <= r) {
        int md = (l + r) >> 1;
        if (go(md)) ans = md, r = md - 1;
        else l = md + 1;
    }
    cout << ans << '\n';
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