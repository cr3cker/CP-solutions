// https://codeforces.com/contest/2117/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, x; cin >> n >> x;
  vector<int> v(n);
  int mx = -1;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (int i = 0; i < n; i++) {
    if (v[i] == 1) {
      for (int j = i + 1; j < n; j++) {
        if (v[j] == 1) mx = max(mx, j - i);
      }
    }
  }

  mx >= x ? cout << "NO" << endl : cout << "YES" << endl;
}


int main() {
  int t = 1;
  cin >> t;
  while (t--) solve();
}