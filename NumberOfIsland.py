# Given a grid of size n*m (n is the number of rows and m is the number of columns in the grid) consisting of
# '0's (Water) and '1's(Land). Find the number of islands.

# Note: An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically
# or diagonally i.e., in all 8 directions.

from collections import deque
import sys
sys.setrecursionlimit(10**8)
class Solution:
    def BFS(self,grid,vis,delrow,delcol,row,col,m,n,queue):
        queue.append([row,col])
        while len(queue)!=0:
           row=queue[0][0]
           col=queue[0][1]
           queue.popleft()
           vis[row][col]=1
           for i in range(8):
               newrow=row+delrow[i]
               newcol=col+delcol[i]
               if newrow>=0 and newrow<n and newcol>=0 and newcol<m and vis[newrow][newcol]==0 and grid[newrow][newcol]==1:
                   queue.append([newrow,newcol])
                   vis[newrow][newcol]=1
                   
    def numIslands(self,grid):
        n=len(grid)
        m=len(grid[0])
        c=0
        delrow=[-1,-1,0,1,1,1,0,-1]
        delcol=[0,1,1,1,0,-1,-1,-1]
        vis=[[0]*m for i in range(n)]
        queue=deque([])
        
        for i in range(n):
           for j in range(m):
               if grid[i][j]==1 and vis[i][j]==0:
                   c+=1
                   self.BFS(grid,vis,delrow,delcol,i,j,m,n,queue)
        
        return c
    
if __name__=="__main__":
    for _ in range(int(input())):
        n,m=map(int,input().strip().split())
        grid=[]
        for i in range(n):
            grid.append([int(i) for i in input().strip().split()])
        obj=Solution()
        print(obj.numIslands(grid))