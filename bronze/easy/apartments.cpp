// https://cses.fi/problemset/task/1084

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  ll n, m, k; cin >> n >> m >> k;
  vector<ll> people(n);
  vector<ll> aparts(m);

  for (ll i = 0; i < n; i++) cin >> people[i];
  for (ll i = 0; i < m; i++) cin >> aparts[i];

  sort(people.begin(), people.end());
  sort(aparts.begin(), aparts.end());

  int i = 0;
  int j = 0;

  int ans = 0;
  while (i < n && j < m) {
    if (abs(people[i] - aparts[j]) <= k) {
      i++;
      j++;
      ans++;
    } else if (people[i] < aparts[j]) {
      i++;
    } else if (people[i] > aparts[j]) {
      j++;
    }
  }

  cout << ans << endl;
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