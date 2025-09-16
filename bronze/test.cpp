#include <bits/stdc++.h>
using namespace std;

bool safe(int row, int col, vector<int>& cols) {
  for (int prev = 0; prev < row; prev++) {
    if (cols[prev] == col) return false;
    if (abs(row - prev) == abs(col - cols[prev])) return false;
  }
  return true;
}

void solve(vector<vector<int>>& solutions, int row, int n, vector<int>& cols) {
  if (row == n) {
    solutions.push_back(cols);
  }
  for (int col = 0; col < n; col++) {
    if (safe(row, col, cols)) {
      cols[row] = col;
      solve(solutions, row + 1, n, cols);
    }
  }
}

int main() {
  int n; cin >> n;
  vector<vector<int>> solutions;
  vector<int> cols(n);

  solve(solutions, 0, n, cols);

  cout << solutions.size() << endl;

  return 0;
}