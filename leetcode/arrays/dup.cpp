// https://leetcode.com/problems/contains-duplicate/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool containsDuplicate(vector<int>& nums) {
    set<int> duplicates;
    for (int i = 0; i < nums.size(); i++) {
      if (duplicates.count(nums[i])) return true;
      duplicates.insert(nums[i]);
    }
    return false;
  }
};