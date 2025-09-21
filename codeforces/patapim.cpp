// https://codeforces.com/contest/2094/problem/C
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> ans(2*n, 0);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int a; cin >> a;
      ans[i + j] = a;
    }
  }

  cout << (2*n * (2*n + 1) / 2) - accumulate(ans.begin(), ans.end(), 0)  << " ";
  for (int i = 0; i < 2*n - 1; i++) {
    if (i < 2*n - 2) cout << ans[i] << " ";
    else cout << ans[i] << endl;
  }
}

int main() {
  int t; cin >> t;
  while (t--) solve();
}