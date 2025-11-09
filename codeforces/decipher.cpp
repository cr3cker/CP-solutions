// https://codeforces.com/contest/1729/problem/B 
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;

    string ans;
    for (int i = n - 1; i >= 0; --i) {
      char letter;
      if (s[i] != '0') {
        int num = s[i] - '0';
        letter = 'a' - 1 + num;
      } else {
        string complex;
        for (int j = i - 1; j >= i - 2; j--) complex = s[j] + complex;
        i -= 2;
        int num = stoi(complex);
        letter = 'a' - 1 + num;
      } 
      ans += letter;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
  }
}
