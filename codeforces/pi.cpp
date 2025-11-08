// https://codeforces.com/contest/1790/problem/A 
#include <iostream>
using namespace std;

int main() {
  string pi = "314159265358979323846264338327";
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    int i = 0;
    bool f = false;
    while (i < 30) {
      if (pi[i] != s[i]) {
        cout << i << endl;
        f = true;
      }
      if (f) break;
      i++;
    }
    if (!f) cout << i << endl;
  }
}
