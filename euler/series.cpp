// https://projecteuler.net/problem=8
#include <bits/stdc++.h>
using namespace std;

int main() {
  string text, line;
  while (getline(cin, line)) text += line;
  long long mx = 0;
  for (int i = 0; i < text.size() - 12; ++i) {
    long long prod = 1;
    for (int j = i; j < i + 13; j++) {
      prod *= text[j] - '0'; 
    }
    mx = max(mx, prod);
  }
  cout << mx << endl;
}
