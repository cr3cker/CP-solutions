// https://codeforces.com/contest/2163/problem/A 
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> v(n);
    for (int &i : v) cin >> i;

    sort(v.begin(), v.end());
   
    bool f = false;
    for (int i = 0; i < n - 1; i++) {
      int idx = i + 1;
      if (idx % 2 == 0 && v[i] != v[i + 1]) {
        f = true;
        break;
      }
    }
    if (f) cout << "NO" << endl;
    else cout << "YES" << endl;
  }
}
