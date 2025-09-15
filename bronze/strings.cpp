#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  string s;
  cin >> s;

  sort(s.begin(), s.end());

  int cnt = 0;
  do {
    cnt++;
  } while (next_permutation(s.begin(), s.end()));

  cout << cnt << endl;

  do {
    cout << s << endl;
  } while (next_permutation(s.begin(), s.end()));
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  // freopen("shuffle.in", "r", stdin);
  // freopen("shuffle.out", "w", stdout);
#endif

  ll test=1;
  // cin>>test;
  while(test--)
  {
    solve();
  }

  return 0;
}