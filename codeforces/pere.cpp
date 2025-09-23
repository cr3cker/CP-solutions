// https://codeforces.com/contest/2137/problem/B
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> p(n);
  for (int i = 0; i < n; i++) cin >> p[i];

  vector<int> q(n);
  for (int i = 0; i < n; i++) {
    q[i] = n + 1 - p[i];
  }

  for (int i = 0; i < n; i++) cout << q[i] << " ";
  cout << "\n";
}


int main() {
  int t = 1;
  cin >> t;
  while (t--) solve();
}