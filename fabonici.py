def fib(n, arr={}):
    if n in arr:
        return arr[n]
    if n<=2:
        return 1
    arr[n]=fib(n-1)+fib(n-2)
    return arr[n]

print(fib(2))
print(fib(3))
print(fib(4))
print(fib(5))
print(fib(50))
  