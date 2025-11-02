// https://codeforces.com/contest/2167/problem/B
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  string s, t; cin >> s >> t;

  sort(s.begin(), s.end());
  sort(t.begin(), t.end());

  if (s == t) cout << "YES" << endl;
  else cout << "NO" << endl;
}

int main() {
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}
