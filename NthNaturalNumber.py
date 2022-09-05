# Given a positive integer N. You have to find Nth natural number
# after removing all the numbers containing digit 9.
class Solution:
    def findNth(self, N, M:int=9):
        alpha, beta=0, 1
        while( N>0 ):
            alpha += (beta * (int(N)%M))
            N/=M
            beta*=10
        
        return alpha

t=int(input('No of test cases:'))
for i in range(t):
    n=int(input())
    obj=Solution()
    s=obj.findNth(n)
    print(s)