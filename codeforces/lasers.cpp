// https://codeforces.com/contest/2148/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector
#define all(x) (x).begin(), (x).end()

void solve() {
  int n, m, x, y; cin >> n >> m >> x >> y;

  int ans = 0;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    if (a <= y) ans++;
  }
  for (int i = 0; i < m; i++) {
    int a; cin >> a;
    if (a <= x) ans++;
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
  cin>>test;
  while(test--)
  {
    solve();
  }

  return 0;
}