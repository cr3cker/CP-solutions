// https://usaco.org/index.php?page=viewproblem2&cpid=855

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  vec<int> capacities(3);
  vec<int> amount(3);

  for (int i = 0; i < 3; i++) {
    int a, b;
    cin >> a >> b;
    capacities[i] = a;
    amount[i] = b;
  }

  int idx = 0;
  for (int i = 1; i <= 100; i++) {
    int next = (idx + 1) % 3;
    if (amount[idx] + amount[next] <= capacities[next]) {
      amount[next] += amount[idx];
      amount[idx] = 0;
    } else {
      amount[idx] -= capacities[next] - amount[next];
      amount[next] = capacities[next];
    }
    idx = (idx + 1) % 3;
  }

  for (int i : amount) cout << i << endl;
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("mixmilk.in", "r", stdin);
  freopen("mixmilk.out", "w", stdout);
#endif

  ll test=1;
  // cin>>test;
  while(test--)
  {
    solve();
  }

  return 0;
}