// https://codeforces.com/contest/2149/problem/C

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> freq(n + 2, 0);
    
    for (int &x : a) {
        cin >> x;
        if (x <= n) freq[x]++;
    }

    int missing = 0;
    for (int i = 0; i < k; ++i) {
        if (freq[i] == 0) missing++;
    }

    int count_k = freq[k];

    int ans = max(missing, count_k);

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) solve();
}

