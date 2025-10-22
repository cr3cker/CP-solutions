// https://codeforces.com/contest/2155/problem/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  int winners = n;
  int losers = 0;
  int ans = 0;

  while (winners >= 2 || losers >= 2) {
    if (winners % 2 == 0) {
      ans += winners / 2;
      losers += winners / 2;
      winners -= winners / 2;
    } else {
      ans += (winners - 1) / 2;
      losers += (winners - 1) / 2;
      winners -= (winners - 1) / 2; 
    }

    if (losers % 2 == 0) {
      ans += losers / 2;
      losers -= losers / 2;
    } else {
      ans += (losers - 1) / 2;
      losers -= (losers - 1) / 2;
    }
  }

  cout << ans + (winners + losers) / 2 << endl;
}


int main() {
  int t = 1;
  cin >> t;
  while (t--) solve();
}
