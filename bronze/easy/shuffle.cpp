// https://usaco.org/index.php?page=viewproblem2&cpid=760

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  int n; cin >> n;
  vec<int> rules(n);
  vec<string> res(n);
  for (int i = 0; i < n; i++) cin >> rules[i];
  for (int i = 0; i < n; i++) cin >> res[i];

  vector<string> shuffle(n);
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < n; j++) {
      shuffle[j] = res[rules[j] - 1];
    }
    res = shuffle;
  }

  for (string i : shuffle) cout << i << endl;
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("shuffle.in", "r", stdin);
  freopen("shuffle.out", "w", stdout);
#endif

  ll test=1;
  // cin>>test;
  while(test--)
  {
    solve();
  }

  return 0;
}