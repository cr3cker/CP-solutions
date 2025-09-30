// https://projecteuler.net/problem=2
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);

    long long ans = 0;
    for (int i = 2; i < 100; i++) {
        if (v[i - 1] <= 4000000 && v[i - 2] <= 4000000) {
            v.push_back(v[i - 1] + v[i - 2]);
        }
        else break;
    }

    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0) ans += v[i];
    }

    cout << ans << endl;
}
