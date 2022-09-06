'''Given an integer array coins[ ] of size N representing different denominations of currency and an integer sum,
find the number of ways you can make sum by using different combinations from coins[ ].  
Note: Assume that you have an infinite supply of each type of coin.
i/p:
4 3
1 2 3
'''

class Solution:
    def count(self, coins, N, sum):
        memo = []
        for i in range(N+1):
           a = [0]*(sum+1)
           memo.append(a)
           memo[i][0] = 1
        for i in range(1,N+1):
           for j in range(1,sum+1):
               if j>=coins[i-1]:
                   memo[i][j] = memo[i-1][j] + memo[i][j-coins[i-1]]
               else:
                   memo[i][j] = memo[i-1][j]
        return memo[N][sum]




import sys
sys.setrecursionlimit(10**6)

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        sum,N = list(map(int, input().strip().split()))
        coins = list(map(int, input().strip().split()))
        ob = Solution()
        print(ob.count(coins,N,sum))

