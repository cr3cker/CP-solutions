// https://projecteuler.net/problem=6
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long first = 0;
    for (int i = 1; i <= 100; i++) {
        first += i * i;
    }
    long long second = pow(101 * 100 / 2, 2);

    cout << second - first << endl;
}