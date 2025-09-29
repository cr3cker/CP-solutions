# https://leetcode.com/problems/valid-palindrome

class Solution:
    def isPalindrome(self, s: str) -> bool:
        new_str = ""
        s = s.lower()
        for i in s:
            if i.isalnum(): new_str += i
        i = 0
        j = len(new_str) - 1
        print(new_str)
        while i <= j:
            if new_str[i] != new_str[j]:
                return False
            i += 1
            j -= 1
        return True