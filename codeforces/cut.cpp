// https://codeforces.com/problemset/problem/2144/A
#include <bits/stdc++.h>
using namespace std;
int main() {
  int t = 1;
  cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> v(n);
    for (int &i : v) cin >> i;

    bool found = false;
    for (int l = 0; l < n && !found; l++) {
      for (int r = l + 1; r < n && !found; r++) {
        int left = accumulate(v.begin(), v.begin() + l + 1, 0) % 3;
        int mid = accumulate(v.begin() + l + 1, v.begin() + r + 1, 0) % 3;
        int right = accumulate(v.begin() + r + 1, v.end(), 0) % 3;

        if ((left == mid && mid == right) || (left != mid && mid != right && left != right)) {
          cout << l + 1 << " " << r + 1 << endl;
          found = true;
        }
      }
    }
    if (!found) cout << "0 0" << endl;
  }
}