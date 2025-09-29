// https://codeforces.com/contest/2149/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    int cnt_neg = 0;
    int cnt_zero = 0;
    for (int &i : v) {
        cin >> i;
        if (i == -1) cnt_neg++;
        else if (i == 0) cnt_zero++;
    }

    if (cnt_neg % 2 == 0) cout << cnt_zero << endl;
    else cout << cnt_zero + 2 << endl;
}


int main() {
  int t = 1;
  cin >> t;
  while (t--) solve();
}
