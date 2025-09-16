// https://leetcode.com/problems/missing-number/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int missingNumber(vector<int>& nums) {
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < nums.size(); i++) {
      sum1 += i;
      sum2 += nums[i];
    }
    return sum1 + nums.size() - sum2;
  }
};