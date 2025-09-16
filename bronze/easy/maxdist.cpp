// https://codeforces.com/gym/102951/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  int n; cin >> n;
  vec<int> xs(n);
  vec<int> ys(n);
  for (int i = 0; i < n; i++) cin >> xs[i];
  for (int i = 0; i < n; i++) cin >> ys[i];

  int mx = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int dx = xs[i] - xs[j];
      int dy = ys[i] - ys[j];
      int dist = dx * dx + dy * dy;
      mx = max(mx, dist);
    }
  }
  cout << mx << endl;
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  // freopen("mixmilk.in", "r", stdin);
  // freopen("mixmilk.out", "w", stdout);
#endif

  ll test=1;
  // cin>>test;
  while(test--)
  {
    solve();
  }

  return 0;
}