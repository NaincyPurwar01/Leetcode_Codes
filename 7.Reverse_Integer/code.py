class Solution:
    def reverse(self, x: int) -> int:
        c = 0
        v = 0
        f =1
        if x<0:
            x = x * (-1)
            f = 0
        n = x
        while(n>0):
            n = n // 10
            c += 1
        while(x>0):
            c = c-1
            r = x % 10
            x = x//10
            v += (r*(pow(10,c)))
        print(f)
        if v<((pow(2,31))-1):
            if f==1:
                return v
            else:
                return v * (-1)
        else:
            return 0