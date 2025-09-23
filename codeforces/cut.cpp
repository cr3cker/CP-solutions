// https://codeforces.com/contest/2144/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> v(n);
  for (int &i : v) cin >> i;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int s1 = accumulate(v.begin(), v.begin() + i + 1, 0) % 3;
      int s2 = accumulate(v.begin() + i + 1, v.begin() + i + j + 1, 0) % 3;
      int s3 = accumulate(v.begin() + i + j + 1, v.end(), 0) % 3;
      if ((s1 == s2 && s2 == s3) || (s1 != s2 && s2 != s3)) {
        cout << s1 << " " << s2 << " " << s3 << endl;
        cout << i << " " << j << endl;
        return;
      }
    }
  }
}


int main() {
  int t = 1;
  cin >> t;
  while (t--) solve();
}