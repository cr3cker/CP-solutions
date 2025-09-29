// https://codeforces.com/contest/2082/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t = 1;
  cin >> t;
  while (t--) {
    int n, m; cin >> n >> m;
    vector<string> mat(n);
    for (int i = 0; i < n; i++) {
      cin >> mat[i];
    }
    int rows = 0; int cols = 0;
    for (int i = 0; i < n; i++) {
      int ones = 0;
      for (int j = 0; j < m; j++) {
        if (mat[i][j] == '1') ones++;
      }
      if (ones % 2 != 0) rows++;
    }

    for (int j = 0; j < m; j++) {
      int ones = 0;
      for (int i = 0; i < n; i++) {
        if (mat[i][j] == '1') ones++;
      }
      if (ones % 2 != 0) cols++;
    }

    cout << max(cols, rows) << endl;
  }
}