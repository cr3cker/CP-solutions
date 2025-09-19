// https://usaco.org/index.php?page=viewproblem2&cpid=615

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  int x, y, m; cin >> x >> y >> m;

  int closest = 0;
  for (int first = 0; first <= m; first++) {
    if (x * first > m) { break; }
    for (int second = 0; second <= m; second++) {
      int n = (x * first) + (y * second);
      if (n > m) { break; }
      closest = max(closest, n);
    }
  }

  cout << closest << endl;
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("pails.in", "r", stdin);
  freopen("pails.out", "w", stdout);
#endif

  ll test=1;
  // cin>>test;
  while(test--)
  {
    solve();
  }

  return 0;
}