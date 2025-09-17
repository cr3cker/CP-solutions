// https://codeforces.com/contest/1808/problem/B?locale=ru

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  int n, m; cin >> n >> m;
  vector<vector<int>> cards(n, vector<int>(m));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> cards[i][j];
    }
  }

  int total = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = 0; k < m; k++) {
        total += abs(cards[i][k] - cards[j][k]);
      }
    }
  }

  cout << total << endl;

  // for (vector<int> c : cards) {
  //   for (int i : c) {
  //     cout << i << " ";
  //   }
  //   cout << endl;
  // }
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  // freopen("cowsignal.in", "r", stdin);
  // freopen("cowsignal.out", "w", stdout);
#endif

  ll test=1;
  cin>>test;
  while(test--)
  {
    solve();
  }

  return 0;
}