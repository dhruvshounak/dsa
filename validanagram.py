#Valid Anagram
"""
Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.
"""
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!= len(t):
            return False
        countS,countT = {},{}
        for i in range(len(s)):
            countS[s[i]] = countS.get(s[i],0) + 1
            countT[t[i]] = countT.get(t[i],0) + 1
        for c in countS:
            if countS[c] == countT.get(c,0):
                return True


