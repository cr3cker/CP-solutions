// https://usaco.org/index.php?page=viewproblem2&cpid=1012

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  int n; cin >> n;
  string s1; cin >> s1;
  string s2; cin >> s2;

  int i = 0;
  bool fl = false;
  int ans = 0;
  while (i < n) {
    if (s2[i] != s1[i]) {
      if (!fl) {
        fl = true;
        ans++;
      }
    } else {
      fl = false;
    }
    i++;
  }
  cout << ans << endl;
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("breedflip.in", "r", stdin);
  freopen("breedflip.out", "w", stdout);
#endif

  ll test=1;
  // cin>>test;
  while(test--)
  {
    solve();
  }

  return 0;
}