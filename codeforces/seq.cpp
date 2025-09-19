// https://codeforces.com/contest/2148/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector
#define all(x) (x).begin(), (x).end()

void solve() {
  int x, n; cin >> x >> n;
  if (n % 2 == 0) cout << 0 << endl;
  else cout << x << endl;
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