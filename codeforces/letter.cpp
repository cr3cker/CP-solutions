// https://codeforces.com/contest/2121/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t = 1;
  cin >> t;
  while (t--) {
    int n, s; cin >> n >> s;
    vector<int> v(n);
    for (int &i : v) cin >> i;

    int first = abs(s - v[0]) + abs(v[n - 1] - v[0]);
    int second = abs(s - v[n - 1]) + abs(v[n - 1] - v[0]);
    cout << min(first, second) << endl;
  }
}