// https://codeforces.com/contest/1790/problem/C 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<vector<int>> perms(n, vector<int>(n - 1));
        vector<int> first_count(n + 1, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                cin >> perms[i][j];
            }
            first_count[perms[i][0]]++;
        }

        int first = -1;
        for (int i = 1; i <= n; i++) {
            if (first_count[i] == n - 1) {
                first = i;
                break;
            }
        }

        cout << first << " ";
        for (int i = 0; i < n; i++) {
            if (perms[i][0] != first) {
                for (int x : perms[i]) cout << x << " ";
                break;
            }
        }
        cout << "\n";
    }
}
