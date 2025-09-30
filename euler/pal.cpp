// https://projecteuler.net/problem=4
#include <bits/stdc++.h>
using namespace std;

int main() {
    int best = -1;
    for (int i = 100; i <= 999; i++) {
        for (int j = 100; j <= 999; j++) {
            int p = i * j;
            string s = to_string(p);
            string r = s;
            reverse(r.begin(), r.end());
            if (s == r) best = max(best, p);
        }
    }
    cout << best << endl;
}