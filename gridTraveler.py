def gridTraveler(m, n, arr={}):
    key=str(m) + ',' +str(n)
    if key in arr:
        return arr[key]
    if n==1 and m==1:
        return 1
    elif n==0 or m==0:
        return 0
    arr[key]=gridTraveler(m, n-1, arr)+ gridTraveler(m-1, n, arr)
    return arr[key]
print(gridTraveler(1,1))
print(gridTraveler(2,2))
print(gridTraveler(2,3))
print(gridTraveler(4,4))
print(gridTraveler(3,3))
print(gridTraveler(20,20))