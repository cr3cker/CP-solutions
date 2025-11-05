// https://codeforces.com/contest/1992/problem/B 
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    vector<int> v(k);
    for (int &i : v) cin >> i;
    sort(v.begin(), v.end());

    int ans = 0;
    for (int i = 0; i < k - 1; i++) {
      if (v[i] > 1) ans += v[i] - 1 + v[i];
      else if (v[i] == 1) ans++;
    }

    cout << ans << endl;
  }
}
