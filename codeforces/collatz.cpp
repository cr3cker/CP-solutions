// https://codeforces.com/contest/2137/problem/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int k, x; cin >> k >> x;
  for (int i = 0; i < k; i++) x *= 2;
  cout << x << endl;
}

int main() {
  int t = 1; cin >> t;
  while (t--) solve();
}