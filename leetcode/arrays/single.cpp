// https://leetcode.com/problems/single-number/
#include <bits/stdc++.h>
using namespace std;

// the idea is that 2 ^ 2 = 0 and 2 ^ 2 ^ 2 = 2
// we encounter only 1 number odd times, so it will be the answer if we just XOR all the values

class Solution {
public:
  int singleNumber(vector<int>& nums) {
    int ans = 0;
    for (int i : nums) {
      ans ^= i;
    }
    return ans;
  }
};