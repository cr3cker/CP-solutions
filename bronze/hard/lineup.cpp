// https://usaco.org/index.php?page=viewproblem2&cpid=965

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define vec vector

void solve() {
  int n;
  cin >> n;
  cin.ignore();

  map<string, int> mymap = {
    {"Bessie", 0},
    {"Buttercup", 1},
    {"Belinda", 2},
    {"Beatrice", 3},
    {"Bella", 4},
    {"Blue", 5},
    {"Betsy", 6},
    {"Sue", 7},
  };

  vector<string> cows = {"Bessie","Buttercup","Belinda","Beatrice","Bella","Blue","Betsy","Sue"};

  vector<vector<int>> adj(8);
  for (int i = 0; i < n; i++) {
    string s;
    getline(cin, s);
    string first = s.substr(0, s.find_first_of(' '));
    string last = s.substr(s.find_last_of(' ') + 1);
    adj[mymap[first]].push_back(mymap[last]);
    adj[mymap[last]].push_back(mymap[first]);
  }

  sort(cows.begin(), cows.end());
  do {
    vector<int> pos(8);
    for (int i = 0; i < 8; i++) pos[mymap[cows[i]]] = i;

    bool ok = true;
    for (int i = 0; i < 8; i++) {
      for (int neigh : adj[i]) {
        if (abs(pos[i] - pos[neigh]) != 1) {
          ok = false;
          break;
        }
      }
      if (!ok) break;
    }

    if (ok) {
      for (string name : cows) cout << name << "\n";
      return;
    }

  } while (next_permutation(cows.begin(), cows.end()));
}


int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("lineup.in", "r", stdin);
  freopen("lineup.out", "w", stdout);
#endif

  ll test=1;
  // cin>>test;
  while(test--)
  {
    solve();
  }

  return 0;
}