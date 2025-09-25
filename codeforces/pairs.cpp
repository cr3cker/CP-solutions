// https://codeforces.com/contest/2149/problem/B

#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        for (int &i : v) cin >> i;
        sort(v.begin(), v.end());
        int mx = INT_MIN;
        for (int i = 0; i < n - 1; i+=2) {
            mx = max(mx, v[i + 1] - v[i]);
        }
        cout << mx << endl;
    }
}
