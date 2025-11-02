// https://codeforces.com/contest/2060/problem/A 
#include <bits/stdc++.h>
using namespace std;

void solve() {
  vector<int> v(5);
  cin >> v[0] >> v[1] >> v[3] >> v[4];

  int mx_f = 0;
  for (int i = -100; i <= 100; i++) {
    int f = 0;
    v[2] = i;
    for (int j = 2; j < v.size(); j++) {
      if (v[j] == v[j - 1] + v[j - 2]) f++;
    }
    mx_f = max(mx_f, f);
  }

  cout << mx_f << endl;
}

int main() {
  int t = 1;
  cin >> t;
  while (t--) solve();
}
