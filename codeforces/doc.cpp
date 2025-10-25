// https://codeforces.com/contest/2106/problem/A 
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  string s; cin >> s;
  string s2 = s;

  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '1') s[i] = '0';
    else s[i] = '1';
    for (int j = 0; j < n; j++) {
      if (s[j] == '1') ans++;
    }
    s = s2;
  }
  cout << ans << endl;
}

int main() {
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}
