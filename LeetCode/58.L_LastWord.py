s = "   fly me   to   the moon  "

lass Solution:
    def lengthOfLastWord(self, s: str) -> int:
        length = 0
        i = len(s)-1
        while i >= 0 and s[i] == " ":
            i -= 1
        while i >= 0 and s[i] != " ":
            length += 1
            i -= 1
        return length
        
# array = s.split()
# return len(array[-1])      
 
# print(type(two_digit_number))
# first=int(two_digit_number[0])
# second=int(two_digit_number[1])
# print(type(first))
# print(type(second))
# print(first+second)
