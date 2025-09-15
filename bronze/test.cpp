#include <vector>
#include <iostream>
using namespace std;


// TODO: Понять как генерируются пермутации и сабсеты, потыкать бэктрекинг, посмотреть видео про него

vector<int> v = {1, 2, 3, 4, 5};

int sum(const vector<int>& v, int i = 0) {
  if (i == v.size()) return 0;
  return v[i] + sum(v, i + 1);
}

int cnt(const vector<int>& v, int i = 0) {
  if (i == v.size()) return 0;
  return 1 + cnt(v, i + 1);
}

int mx(const vector<int>& v, const int i = 0) {
  if (i == v.size() - 1) return v[i];
  return max(v[i], mx(v, i + 1));
}


int main() {
  cout << mx(v) << endl;
  return 0;
}