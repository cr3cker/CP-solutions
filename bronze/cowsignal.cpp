#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  int m, n, k;
  cin >> m >> n >> k;

  char signal[m][n];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> signal[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    for (int s = 0; s < k; s++) {
      for (int j = 0; j < n; j++) {
        for (int l = 0; l < k; l++) cout << signal[i][j];
      }
      cout << endl;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("cowsignal.in", "r", stdin);
  freopen("cowsignal.out", "w", stdout);
#endif

  ll test=1;
  // cin>>test;
  while(test--)
  {
    solve();
  }

  return 0;
}