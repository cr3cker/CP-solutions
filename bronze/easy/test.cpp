#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  int n; cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];

  for (int k = 1; k <= n; k++) {
    int bestSum = -1e9;
    int bestStart = 0;

    for (int i = 0; i + k <= n; i++) {
      int sum = 0;
      for (int j = 0; j < k; j++) {
        sum += v[i + j];
      }
      if (sum > bestSum) {
        bestSum = sum;
        bestStart = i;
      }
    }
    for (int j = 0; j < k; j++) {
      v[bestStart + j] -= 1;
    }
  }

  for (int i = 0; i < n; i++) {
    if (v[i] != 0) {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  // freopen("shell.in", "r", stdin);
  // freopen("shell.out", "w", stdout);
#endif

  ll test=1;
  cin>>test;
  while(test--)
  {
    solve();
  }

  return 0;
}