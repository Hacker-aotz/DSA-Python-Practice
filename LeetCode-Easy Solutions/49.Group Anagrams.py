from collections import defaultdict

<<<<<<< HEAD:LeetCode-Easy Solutions/49.Group Anagrams.py

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        result = defaultdict(list)

        for word in strs:
            count = [0] * 26

            for char in word:
                count[ord(char) - ord("a")] += 1

            result[tuple(count)].append(word)

        return result.values()
=======
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        result=defaultdict(list)
        
        for word in strs:
            count=[0]*26
            
            for char in word:
                count[ord(char)-ord("a")]+=1
                
            result[tuple(count)].append(word)
            
        return result.values()
                
>>>>>>> 79dd1914627fddd68eba890e0c591b0180d11ae2:LeetCode/49.Group Anagrams.py
