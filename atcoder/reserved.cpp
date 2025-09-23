// https://atcoder.jp/contests/abc421/tasks/abc421_b
#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y; cin >> x >> y;
  vector<long long> v(10);
  v[0] = x; v[1] = y;
  for (int i = 2; i < 10; i++) {
    string res = to_string(v[i - 1] + v[i - 2]);
    reverse(res.begin(), res.end());
    v[i] = stoll(res);
  }

  cout << v[9] << endl;
}