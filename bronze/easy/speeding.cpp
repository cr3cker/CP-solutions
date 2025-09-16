// https://usaco.org/index.php?page=viewproblem2&cpid=568

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  int n, m;
  cin >> n >> m;

  vec<vec<int>> road_seg(n);
  vec<vec<int>> bess_seg(m);

  int start = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    road_seg[i] = {start, start + a, b};
    start += a;
  }

  start = 0;

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    bess_seg[i] = {start, start + a, b};
    start += a;
  }

  int mx = 0;
  for (int i = 0; i <= 100; i++) {
    int speed = 0;
    int limit = 0;

    for (int j = 0; j < n; j++) {
      if (i >= road_seg[j][0] && i <= road_seg[j][1]) {
        limit = road_seg[j][2];
      }
    }

    for (int j = 0; j < m; j++) {
      if (i >= bess_seg[j][0] && i <= bess_seg[j][1]) {
        speed = bess_seg[j][2];
      }
    }

    if (speed > limit && speed - limit > mx) {
      mx = speed - limit;
    }
  }

  cout << mx << endl;
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("speeding.in", "r", stdin);
  freopen("speeding.out", "w", stdout);
#endif

  ll test=1;
  // cin>>test;
  while(test--)
  {
    solve();
  }

  return 0;
}