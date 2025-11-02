// https://codeforces.com/contest/2167/problem/C 
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<long long> v(n);
  for (long long&i : v) cin >> i;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (v[i] > v[j] && (v[i] % 2) != (v[j] % 2)) swap(v[i], v[j]);
    }
  }

  for (int i = 0; i < n - 1; i++) cout << v[i] << " ";
  cout << v[n - 1] << endl;
}

int main() {
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}
