// https://codeforces.com/contest/2160/problem/A
#include <bits/stdc++.h>
#include <climits>
using namespace std;

void solve() {
  int n; cin >> n;
  set<int> v;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    v.insert(a);
  }

  for (int i = 0; i <= 100; i++) {
    if (!v.count(i)) {
      cout << i << endl;
      return;
    } 
  }
}

int main() {
  int t = 1;
  cin >> t;
  while (t--) solve();

  return 0;
} 
