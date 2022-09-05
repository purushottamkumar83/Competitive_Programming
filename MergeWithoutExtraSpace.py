# Given two sorted arrays arr1[] and arr2[] of sizes n and m in 
# non-decreasing order. Merge them in sorted order without using 
# any extra space. Modify arr1 so that it contains the first N 
# elements and modify arr2 so that it contains the last M elements.
class Solution:
    
    #Function to merge the arrays.
    def merge(self,arr1,arr2,n,m):
        res=[]
        res.extend(arr1)
        res.extend(arr2)
        res.sort()
        for i in range(n):
            arr1[i]=res[i]
        for i in range(m):
            arr2[i]=res[n+i]
    


#{ 
#  Driver Code Starts
#Initial template for Python

if __name__ == '__main__':
    t = int(input('No of test cases:'))
    for tt in range(t):
        n,m = map(int, input('Size of both array1 and array2:').strip().split())
        arr1 = list(map(int, input(f'{n} elements of array 1:').strip().split()))
        arr2 = list(map(int, input(f'{n} elements of array 1:').strip().split()))
        ob=Solution()
        ob.merge(arr1, arr2, n, m)
        print(*arr1,end=" ")
        print(*arr2)
# } Driver Code Ends