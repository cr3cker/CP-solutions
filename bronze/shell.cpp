#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  int n;
  cin >> n;

  vec shells = {1, 2, 3};
  vec<int> ans(3);

  for (int i = 0; i < n; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    swap(shells[a - 1], shells[b - 1]);
    ans[shells[c - 1] - 1]++;
  }

  cout << *max_element(ans.begin(), ans.end()) << endl;
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("shell.in", "r", stdin);
  freopen("shell.out", "w", stdout);
#endif

  ll test=1;
  // cin>>test;
  while(test--)
  {
    solve();
  }

  return 0;
}