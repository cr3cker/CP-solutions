// https://codeforces.com/contest/2162/problem/A

#include <bits/stdc++.h>
#include <numeric>
using namespace std;


int main() {
  int t;
  cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> v(n);
    for (int &i : v) cin >> i;
    int mx = 0;

    for (int i = 0; i < n; i++) {
      for (int j = i; j < n; j++) {
        int avg = accumulate(v.begin() + i, v.begin() + j + 1, 0) / (j - i + 1);
        mx = max(mx, avg);
      }
    }

    cout << mx << endl;
  }
}
