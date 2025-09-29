// https://codeforces.com/problemset/problem/580/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int mx = 0; 
    int cnt = 0;
    int prev = -1;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (prev == -1 || a >= prev) {
            cnt++;
        } else {
            cnt = 1;
        }
        prev = a;
        mx = max(mx, cnt);
    }
    cout << mx << endl;
}
