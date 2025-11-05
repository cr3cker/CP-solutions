// https://codeforces.com/contest/1992/problem/C 
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n, m, k; cin >> n >> m >> k;
    vector<int> f;
    vector<int> g;
    vector<int> other;

    for (int i = 1; i <= n; i++) {
      if (i >= k) f.push_back(i);
      else if (i <= m) g.push_back(i);
      else other.push_back(i); 
    }

    sort(f.rbegin(), f.rend());
    sort(g.begin(), g.end());

    for (int i : f) cout << i << " ";
    for (int i : other) cout << i << " ";
    for (int i = 0; i < g.size() - 1; i++) cout << g[i] << " ";
    cout << g.back() << endl;
  }
}
