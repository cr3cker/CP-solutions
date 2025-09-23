// https://atcoder.jp/contests/abc421/tasks/abc421_a
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<string> names(n);
  for (int i = 0; i < n; i++) {
    cin >> names[i];
  }
  int idx; cin >> idx;
  string target; cin >> target;
  names[idx - 1] == target ? cout << "Yes" << endl : cout << "No" << endl;
}