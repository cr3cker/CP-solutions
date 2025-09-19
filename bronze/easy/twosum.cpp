// https://cses.fi/problemset/task/1640

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector
#define all(x) (x).begin(), (x).end()

void solve() {
  int n, x; cin >> n >> x;
  map<int, int> m;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    if (m.count(x - a)) {
      cout << i + 1 << " " << m[x - a] << endl;
      return;
    }
    m[a] = i + 1;
  }

  cout << "IMPOSSIBLE" << endl;
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