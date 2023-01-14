# height should be arranged in non decreasing order
# Return the number of of height that is not in non decreasing order

def heightchecker(arr):
    count = 0
    lis = sorted(arr)
    for i in range(len(arr)):
        if arr[i] != lis[i]:
            count += 1
    return count


n = int(input("Enter the size pf the array:"))
print(f'Enter {n} element of the array')
li = []
for i in range(n):
    li.append(int(input()))
res = heightchecker(li)
print(f"Result is {res}")
