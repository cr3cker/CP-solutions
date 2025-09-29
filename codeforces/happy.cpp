// https://codeforces.com/problemset/problem/122/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a = {4, 7, 44, 77, 74, 47, 444, 777, 447, 477, 474, 744, 747};
  for (int i : a) {
    if (n % i == 0) {
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;
}