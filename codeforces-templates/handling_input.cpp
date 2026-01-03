#include <bits/stdc++.h>
using namespace std;

int main() {
    // Everyone uses those two lines by default. Safe and faster for CF.
    ios::sync_with_stdio(false); // Disables synchronization between C++ streams (cin/cout) and C stdio (scanf/printf).
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m; // cin skips spaces/newlines by default.

    vector<int> c(n); // taking in n numbers in a vector
    for (int i = 0; i < n; i++) cin >> c[i];

    while (m--) { // handling m queries
        int type;
        cin >> type;
        if (type == 1) {
            int x;
            cin >> x;
            // add reindeer with strength 2^x
        } else if (type == 2) {
            int x;
            cin >> x;
            // remove reindeer with strength 2^x
        } else if (type == 3) {
            long long x;
            cin >> x;
            // query: count ways with capacity >= x
            // cout << answer << '\n';
        }
    }
    return 0;
}

