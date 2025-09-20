// https://atcoder.jp/contests/abc424/tasks/abc424_c

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  ll n; cin >> n;
  vector<pair<ll,ll>> prereq(n+1);
  vector<bool> acquired(n+1, false);
  vector<vector<ll>> adj(n+1);

  queue<ll> q;
  for (int i = 1; i <= n; i++) {
    ll a, b; cin >> a >> b;
    prereq[i] = {a, b};
    if (a == 0 && b == 0) {
      acquired[i] = true;
      q.push(i);
    } else {
      if (a > 0) adj[a].push_back(i);
      if (b > 0 && b != a) adj[b].push_back(i);
    }
  }

  while (!q.empty()) {
    int x = q.front();
    q.pop();
    for (ll child : adj[x]) {
      if (!acquired[child]) {
        auto [a, b] = prereq[child];
        if (acquired[a] || acquired[b]) {
          acquired[child] = true;
          q.push(child);
        }
      }
    }
  }

  ll ans = 0;
  for (int i = 1; i <= n; i++) if (acquired[i]) ans++;
  cout << ans << "\n";
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