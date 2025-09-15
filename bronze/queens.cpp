#include <bits/stdc++.h>

using namespace std;


bool safe(int row, int col, const vector<int>& cols) {
  for (int prev_row = 0; prev_row < row; prev_row++) {
    int prev_col = cols[prev_row];
    if (prev_col == col) return false;
    if (abs(prev_col - col) == row - prev_row) return false;
  }
  return true;
}


void backtrack(int row, vector<int>& cols, vector<vector<int>>& solutions, char grid[8][8]) {
  if (row == 8) {
    solutions.push_back(cols);
    return;
  }

  for (int col = 0; col < 8; col++) {
    if (safe(row, col, cols) && grid[row][col] != '*') {
      cols[row] = col;
      backtrack(row + 1, cols, solutions, grid);
    }
  }
}


int main() {
  char grid[8][8];
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      cin >> grid[i][j];
    }
  }

  vector<int> cols(8, -1);
  vector<vector<int>> solutions;
  backtrack(0, cols, solutions, grid);

  cout << solutions.size() << endl;

  return 0;
}