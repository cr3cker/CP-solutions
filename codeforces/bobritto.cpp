// https://codeforces.com/contest/2094/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n, m, l, r; cin >> n >> m >> l >> r;
    int need = n - m;
    while (need > 0) {
      if (r > 0) {
        r--;
      } else {
        l++;
      }
      need--;
    }
    cout << l << " " << r << "\n";
  }
}