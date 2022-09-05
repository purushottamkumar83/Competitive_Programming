# Given an array of size N, find the smallest positive integer 
# value that is either not presented in the array or cannot be 
# represented as a sum(coz sum means you are adding two or more 
# elements) of some elements from the array.

class Solution:
    def smallestpositive(self, array, n): 
        array.sort()
        res=1
        i=0
        for i in array:
            if i<=res:
                res+=i
        # while (i<n and array[i]<=res):
        #     res=res+array[i]
        #     i+=1
        return res


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input('No of test cases:'))
    for _ in range(t):
        n = int(input('Size of array:'))
        array = list(map(int, input(f'{n} elements of array:').strip().split()))
        ob = Solution()
        print(ob.smallestpositive(array,n))


# } Driver Code Ends