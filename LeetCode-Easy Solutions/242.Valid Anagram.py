from typing import Counter


class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
<<<<<<< HEAD:LeetCode-Easy Solutions/242.Valid Anagram.py
        return sorted(s) == sorted(t)

        return Counter(s) == Counter(t)

        if len(s) != len(t):
            return False

        countS, countT = {}, {}

        for i in range(len(s)):
            countS[s[i]] = 1 + countS.get(s[i], 0)
            countT[t[i]] = 1 + countT.get(t[i], 0)

        for c in countS:
            if countS[c] != countT.get(c, 0):
                return False
        return True
=======
        return sorted(s)==sorted(t)
        
        return Counter(s)==Counter(t)
        
        if len(s)!=len(t):
            return False
        
        countS,countT={},{}
        
        for i in range(len(s)):
            countS[s[i]]=1+countS.get(s[i],0)
            countT[t[i]]=1 +countT.get(t[i],0)
            
        for c in countS:
            if countS[c] != countT.get(c,0):
                return False
        return True
>>>>>>> 79dd1914627fddd68eba890e0c591b0180d11ae2:LeetCode/242.Valid Anagram.py
