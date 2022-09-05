# Given an array arr[] of N positive integers. Find an integer 
# denoting the maximum XOR subset value in the given array arr[].

class Solution:
    def maxSubarrayXOR(self, arr, N):
        i=0 
        for j in range(31,-1,-1):
            maxIndex=i 
            maxElement=-10**9 
            for k in range(i,n):
                if arr[k]&(1<<j) and arr[k]>maxElement:
                    maxIndex=k
                    maxElement=arr[k]
            if maxElement==-10**9:
                continue 
            arr[i],arr[maxIndex]=arr[maxIndex],arr[i]
            maxIndex=i
            for k in range(n):
                if k!=maxIndex and arr[k]&(1<<j):
                    arr[k]^=arr[maxIndex]
            i+=1 
        ans=0
        for i in arr:
            ans^=i 
        return ans


#{ 
 # Driver Code Starts
if __name__=='__main__':
    t=int(input('No of test cases:'))
    for i in range(t):
        n=int(input('Size of array:'))
        set=list(map(int,input(f'{n} elements of array:').split()))
        obj = Solution()
        print(obj.maxSubarrayXOR(set,n))
# } Driver Code Ends