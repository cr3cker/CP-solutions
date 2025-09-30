// https://projecteuler.net/problem=7
#include <bits/stdc++.h>
using namespace std;


int main() {
    int limit = 120000;
    vector<bool> primes(limit + 1, true);
    primes[0] = primes[1] = false;
    for (int i = 2; i * i <= limit; i++) {
        if (primes[i]) {
            for (int j = i * i; j <= limit; j += i)
                primes[j] = false;
        }
    }

    int count = 0;
    for (int i = 2; i <= limit; i++) {
        if (primes[i]) {
            count++;
            if (count == 10001) {
                cout << i << endl;
                break;
            }
        }
    }
}