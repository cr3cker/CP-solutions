#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  int n; cin >> n;
  vec<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];

  int ans = n;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      double avg = 1.0 * accumulate(v.begin() + i, v.begin() + j + 1, 0) / (j - i + 1);
      for (int k = i; k <= j; k++) {
        if (v[k] == avg) {
          ans++;
          break;
        }
      }
    }
  }
  cout << ans << endl;
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  // freopen("pails.in", "r", stdin);
  // freopen("pails.out", "w", stdout);
#endif

  ll test=1;
  // cin>>test;
  while(test--)
  {
    solve();
  }

  return 0;
}