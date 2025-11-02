// https://codeforces.com/contest/2134/problem/A 
#include <bits/stdc++.h>
using namespace std;


void solve() {
  int n, a, b; cin >> n >> a >> b;
  if ((n & 1) == (b & 1)) {
    if (b >= a || (b < a && (n & 1) == (a & 1))) {
      cout << "YES" << endl;
      return;
    }
  }
  cout << "NO" << endl;
}

int main() {
  int t = 1;
  cin >> t;
  while (t--) solve();

  return 0;
}
