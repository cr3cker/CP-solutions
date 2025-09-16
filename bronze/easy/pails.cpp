// https://usaco.org/index.php?page=viewproblem2&cpid=615

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  int x, y, m; cin >> x >> y >> m;

  vec<int> v1;
  vec<int> v2;

  for (int i = 0; i < m / x; i++) {
    v1.push_back(x);
  }

  for (int i = 0; i < m / y; i++) {
    v1.push_back(y);
  }

  int mx = 0;
  for (int i = 0; i < v1.size(); i++) {
    int sum = v1[i];
    for (int j = 0; j < v1.size(); j++) {
      if (i != j && sum + v1[j] <= m) sum += v1[j];
    }
    mx = max(mx, sum);
  }

  cout << mx << endl;
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("pails.in", "r", stdin);
  freopen("pails.out", "w", stdout);
#endif

  ll test=1;
  // cin>>test;
  while(test--)
  {
    solve();
  }

  return 0;
}