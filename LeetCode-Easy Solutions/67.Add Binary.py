class Solution:
    def addBinary(self, a: str, b: str) -> str:
        result = ""
        carry = 0

        a, b = a[::-1], b[::-1]

        for i in range(max(len(a), len(b))):
            digitA = ord(a[i]) - ord("0") if i < len(a) else 0
            digitB = ord(b[i]) - ord("0") if i < len(b) else 0

            total = digitA + digitB + carry
            char = str(total % 2)
            result = char + result
            carry = total // 2

        if carry:
            result = "1" + result
        return result
