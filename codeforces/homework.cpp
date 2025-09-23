// https://codeforces.com/contest/2132/problem/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  string s1; cin >> s1;
  int m; cin >> m;
  string s2; cin >> s2;
  string rules; cin >> rules;
  int i = 0;

  for (char c : rules) {
    if (c == 'V') s1 = s2[i] + s1;
    else s1 += s2[i];
    i++;
  }

  cout << s1 << endl;
}

int main() {
  int t = 1;
  cin >> t;
  while (t--) solve();
}