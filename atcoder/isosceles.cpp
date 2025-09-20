// https://atcoder.jp/contests/abc424/tasks/abc424_a

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  int a, b, c; cin >> a >> b >> c;
  if (a != b && b != c && a != c) cout << "No" << endl;
  else cout << "Yes" << endl;
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  // freopen("breedflip.in", "r", stdin);
  // freopen("breedflip.out", "w", stdout);
#endif

  ll test=1;
  // cin>>test;
  while(test--)
  {
    solve();
  }

  return 0;
}