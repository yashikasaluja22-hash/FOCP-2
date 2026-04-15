#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    cin >> Q;

    unordered_map<int, long long> balance;

    while (Q--) {
        string query;
        cin >> query;

        if (query == "CREATE") {
            int X;
            long long Y;
            cin >> X >> Y;

            if (balance.find(X) == balance.end()) {
                balance[X] = Y;
                cout << "true\n";
            } else {
                balance[X] += Y;
                cout << "false\n";
            }
        }

        else if (query == "DEBIT") {
            int X;
            long long Y;
            cin >> X >> Y;

            if (balance.find(X) == balance.end() || balance[X] < Y) {
                cout << "false\n";
            } else {
                balance[X] -= Y;
                cout << "true\n";
            }
        }

        else if (query == "CREDIT") {
            int X;
            long long Y;
            cin >> X >> Y;

            if (balance.find(X) == balance.end()) {
                cout << "false\n";
            } else {
                balance[X] += Y;
                cout << "true\n";
            }
        }

        else if (query == "BALANCE") {
            int X;
            cin >> X;

            if (balance.find(X) == balance.end()) {
                cout << -1 << "\n";
            } else {
                cout << balance[X] << "\n";
            }
        }
    }

    return 0;
}