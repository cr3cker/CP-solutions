// https://cses.fi/problemset/task/1091

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  ll n, m; cin >> n >> m;
  vector<int> t(n);
  vector<int> c(m);
  for (int &i : t) cin >> i;
  for (int &i : c) cin >> i;

  sort(t.begin(), t.end());

  for (int i = 0; i < m; i++) {
    auto bound = upper_bound(t.begin(), t.end(), c[i]);
    if (bound == t.begin()) cout << -1 << endl;
    else {
      cout << *(--bound) << endl;
      t.erase(bound);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  // freopen("cowsignal.in", "r", stdin);
  // freopen("cowsignal.out", "w", stdout);
#endif

  ll test=1;
  // cin>>test;
  while(test--)
  {
    solve();
  }

  return 0;
}