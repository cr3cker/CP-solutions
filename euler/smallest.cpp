// https://projecteuler.net/problem=5
#include <bits/stdc++.h>
using namespace std;

int main() {
    bool found = false;
    for (int i = 1; i <= 10000000000; i++) {
        for (int j = 1; j <= 20; j++) {
            if (i % j != 0) {
                found = false;
                break;
            }
            found = true;
        }
        if (found) {
            cout << i << endl;
            break;
        }
    }
}