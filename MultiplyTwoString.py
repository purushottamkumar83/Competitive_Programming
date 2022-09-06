# Given two numbers as strings s1 and s2. Calculate their Product.
# Note: The numbers can be negative.

class Solution:
    def multiplyStrings(self,s1,s2):
        return int(s1)*int(s2)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t=int(input())
    for i in range(t):
        a,b=input().split()
        print(Solution().multiplyStrings( a.strip() , b.strip() ))

# } Driver Code Ends