#include <bits/stdc++.h>
using namespace std;

bool canTurnOff(string &bulbs, int n, int k, int l) {
    int operations = 0;

    for (int i = 0; i < n; i++) {
        if (bulbs[i] == '1') {
            operations++;
            if (operations > k) return false;

            // skip next l bulbs
            i += l - 1;
        }
    }
    return true;
}

int main() {
    int n, k;
    cin >> n >> k;

    string bulbs;
    cin >> bulbs;

    int left = 1, right = n, ans = n;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (canTurnOff(bulbs, n, k, mid)) {
            ans = mid;
            right = mid - 1; // try smaller l
        } else {
            left = mid + 1;  // need bigger l
        }
    }

    cout << ans << endl;
    return 0;
}