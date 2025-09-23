// https://codeforces.com/contest/2132/problem/B
#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n;
  cin >> n;
  vector<long long> ans;
  for (int i = 1; i <= 17; i++) {
    long long d = (long long)pow(10, i) + 1;
    if (n % d == 0) {
      ans.push_back(n / d);
    }
  }

  if (ans.empty()) {
    cout << 0 << "\n";
  } else {
    cout << ans.size() << "\n";
    sort(ans.begin(), ans.end());
    for (auto x : ans) cout << x << " ";
    cout << "\n";
  }
}


int main() {
  int t = 1;
  cin >> t;
  while (t--) solve();
}