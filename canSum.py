import sys
sys.setrecursionlimit(10**8)
def canSum(x, num, arr={}):
    if x in arr:
        return arr[x]
    if x==0:
        print("returning true 1")
        return True
    if x<0:
        return False
    for i in num:
        rem=x-i
        if canSum(rem, num, arr)==True:
            arr[x]=True
            return True
    arr[x]=False
    return False
print(canSum(300, [7,14]))
# print(canSum(3, [2,3]))
# print(canSum(7, [5,3,4,7]))
# print(canSum(7, [2,4]))
# print(canSum(8, [2,3,5]))
