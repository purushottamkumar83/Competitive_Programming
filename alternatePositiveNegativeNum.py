# Alternate positive and negative numbers
# Given an unsorted array Arr of N positive and negative numbers. Your task is to create an array of alternate positive and negative numbers without changing the relative order of positive and negative numbers.
# Note: Array should start with a positive number.

#User function Template for python3

class Solution:
    def rearrange(self,arr, k):
        p=[]
        n=[]
        for i in arr:
            if i>=0:
                p.append(i)
            else:
                n.append(i)
        
        for i in range(k):
            if i%2==0:
                if len(p)==0:
                    arr[i]=n.pop(0)
                else:
                    arr[i]=p.pop(0)
            else:
                if len(n)==0:
                    arr[i]=p.pop(0)
                else:
                    arr[i]=n.pop(0)

# Driver Code

if __name__ == '__main__':
	tc = int(input())
	while tc > 0:
		n = int(input())
		arr = list(map(int, input().strip().split()))
		ob = Solution()
		ob.rearrange(arr, n)
		for x in arr:
			print(x, end=" ")
		print()
		tc -= 1