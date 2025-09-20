// https://codeforces.com/contest/2147/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  int x, y; cin >> x >> y;
  if (x < y) cout << 2 << endl;
  else if (x > y && x - 1 > y && y > 1) cout << 3 << endl;
  else cout << -1 << endl;
}


int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  // freopen("lineup.in", "r", stdin);
  // freopen("lineup.out", "w", stdout);
#endif

  ll test=1;
  cin>>test;
  while(test--)
  {
    solve();
  }

  return 0;
}