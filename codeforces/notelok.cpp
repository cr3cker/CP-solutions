// https://codeforces.com/contest/2154/problem/A
#include <bits/stdc++.h>
using namespace std;


void solve() {
  int n, k; cin >> n >> k;
  string s; cin >> s;

  int ans = 0;
  int last = -1e9;
  for (int i = 0; i < n; i++) {
    if (s[i] == '1' && i - last >= k)
      ans++;
    if (s[i] == '1') last = i;
  }

  cout << ans << endl;
}

int main() {
  int t = 1;
  cin >> t;
  while (t--) solve();
}
