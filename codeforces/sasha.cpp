// https://codeforces.com/contest/1843/problem/A 
#include <bits/stdc++.h>
using namespace std;


void solve() {
  int n; cin >> n;
  vector<int> v(n);
  for (int &i : v) cin >> i;

  sort(v.begin(), v.end());

  int i = 0;
  int j = n - 1;
  int ans = 0;
  while (j > i) {
    ans += v[j--] - v[i++];
  }
  cout << ans << endl;
}

int main() {
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}
