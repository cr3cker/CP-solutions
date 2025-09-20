// https://usaco.org/index.php?page=viewproblem2&cpid=1012

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  ll n, k; cin >> n >> k;
  vector<ll> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];

  ll ans = 0;
  ll start = v[0];

  for (int i = 1; i < n; i++) {
    if (v[i] - v[i-1] > k) {
      ans += (v[i-1] - start + 1) + k;
      start = v[i];
    }
  }
  ans += (v[n-1] - start + 1) + k;
  cout << ans << endl;
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