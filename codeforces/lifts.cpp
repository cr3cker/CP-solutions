// http://codeforces.com/contest/1729/problem/A 
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int a, b, c; cin >> a >> b >> c;
    int t1, t2; t1 = t2 = 0;
    t1 = a - 1;
    if (b > c) t2 = b - 1;
    else t2 = c - 1 + c - b;

    if (t1 < t2) cout << 1 << endl;
    else if (t1 > t2) cout << 2 << endl;
    else cout << 3 << endl;
  }
}
