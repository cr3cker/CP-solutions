// https://codeforces.com/contest/2117/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n; cin >> n;
  cout << 1 << " ";
  for (int i = n; i >= 3; i--) {
    cout << i << " ";
  }
  cout << 2 << endl;
}


int main() {
  int t = 1;
  cin >> t;
  while (t--) solve();
}