# Element with left side smaller and right side greater
# Given an unsorted array of size N. Find the first element in array such that all of its left elements are smaller and all right elements to it are greater than it.
# Note: Left and right side elements can be equal to required element. And extreme elements cannot be required element.

def findElement( arr, n):
    for i in range(1,n-1):
        if checkSmall(arr, i) and checkLarge(arr, i, n):
            return arr[i]
    return -1
    
    
def checkSmall(arr, i):
    for j in range(i):
        if arr[j]>arr[i]:
            return False
    return True

def checkLarge(arr, i, n):
    for j in range(i+1, n):
        if arr[j]<arr[i]:
            return False
    return True
    
# Driver Code
def main():
    T = int(input())
    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        print(findElement(a, n))
        T -= 1

if __name__ == "__main__":
    main()