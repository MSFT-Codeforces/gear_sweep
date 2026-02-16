#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long ans = 0;
        int streak = 0;

        for (int i = 0; i + 1 < n; i++) {
            if (a[i] < 2LL * a[i + 1]) {
                streak++;
            } else {
                if (streak >= k) {
                    ans += (streak - k + 1);
                }
                streak = 0;
            }
        }

        if (streak >= k) {
            ans += (streak - k + 1);
        }

        cout << ans << "\n";
    }

    return 0;
}
