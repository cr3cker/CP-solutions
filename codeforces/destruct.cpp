// https://codeforces.com/contest/2148/problem/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector
#define all(x) (x).begin(), (x).end()

void solve() {
  int n; cin >> n;
  vector<ll> v(n);
  ll sum = 0;
  ll odd = 0;
  ll min_odd = LLONG_MAX;

  for (int i = 0; i < n; i++) {
    cin >> v[i];
    sum += v[i];
    if (v[i] % 2 == 1) {
      odd++;
      min_odd = min(min_odd, v[i]);
    }
  }

  if (odd == 0) {
    cout << 0 << "\n";
  } else if (odd % 2 == 1) {
    cout << sum << "\n";
  } else {
    cout << sum - min_odd << "\n";
  }
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