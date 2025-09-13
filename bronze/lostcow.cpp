#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  int x, y;
  cin >> x >> y;

  int p = 1;
  int total = 0;
  int pos = x;

  while (true) {
    int next = x + p;

    if ((pos <= y && y <= next) || (pos >= y && y >= next)) {
      total += abs(y - pos);
      break;
    }

    total += abs(next - pos);
    pos = next;
    p *= -2;
  }

  cout << total << endl;
}


int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("lostcow.in", "r", stdin);
  freopen("lostcow.out", "w", stdout);
#endif

  ll test=1;
  // cin>>test;
  while(test--)
  {
    solve();
  }

  return 0;
}