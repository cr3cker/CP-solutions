// https://atcoder.jp/contests/abc424/tasks/abc424_b

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  map<int, int> solved;
  int n, m, k; cin >> n >> m >> k;
  vector<int> ans;
  for (int i = 0; i < k; i++) {
    int a, b; cin >> a >> b;
    solved[a]++;
    if (solved[a] == m) ans.push_back(a);
  }

  for (int i = 0; i < ans.size(); i++) {
    if (i < ans.size() - 1) cout << ans[i] << " ";
    else cout << ans[i] << endl;
  }
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