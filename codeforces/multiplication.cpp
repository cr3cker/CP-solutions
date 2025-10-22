// https://codeforces.com/contest/2139/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  int a, b; cin >> a >> b;
  if (a == b) cout << 0 << endl;
  else if (a % b == 0 || b % a == 0) cout << 1 << endl;
  else cout << 2 << endl;
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
