class Solution:
    def isPalindrome(self, x: int) -> bool:
        c = 0
        r = 0
        if x < 0:
            return False
        n = x
        new = x
        while(n>0):
            n = n//10
            c += 1
        while(c>0):
            m = x%10
            c -= 1
            r += (m * pow(10,c))
            x = x//10
        if new == r:
            return True
        return False