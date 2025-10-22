// https://codeforces.com/contest/2162/problem/B
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  string s; cin >> s;

  vector<int> ans;
  for (int i = 0; i < n; i++) {
    if (s[i] == '0') ans.push_back(i + 1);
  }

  cout << ans.size() << endl;
  if (ans.size() == 0) {
    cout << endl;
    return;
  }
  for (int i = 0; i < ans.size() - 1; i++) {
    cout << ans[i] << " ";
  }
  cout << ans[ans.size() - 1] << endl;
}

int main() {
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
} 
