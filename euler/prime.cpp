// https://projecteuler.net/problem=3
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n = 600851475143;
    ll largest = 0;

    for (ll i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }

    if (n > 1) largest = n;

    cout << largest << endl;
}