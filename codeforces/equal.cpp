// https://codeforces.com/contest/2146/problem/A
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b) {
  return a.second < b.second;
}

void solve() {
  int n; cin >> n;
  vector<int> mymap(n, 0);
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    mymap[a - 1]++;
  }

  sort(mymap.begin(), mymap.end());

  int mx = 0;
  for (int i = 0; i < n; i++) {
    if (mymap[i] > 0) mx = max(mx, mymap[i] * (n - i));
  }

  cout << mx << endl;
}

int main() {
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}