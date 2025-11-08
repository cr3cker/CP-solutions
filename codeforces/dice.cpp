// https://codeforces.com/contest/1790/problem/B 
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n, s, r; cin >> n >> s >> r;
    int d = s - r;
    vector<int> v(n);
    v[0] = d;
    int base = r / (n - 1);
    int rem = r % (n - 1);
    for (int i = 1; i < n; i++) {
      v[i] = rem > 0 ? base + 1 : base;
      rem--;
    }
    for (int i = 0; i < n - 1; i++) cout << v[i] << " ";
    cout << v.back() << endl;
  }
}
