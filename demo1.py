def reverse(st):
    res=""
    for i in range(len(st)-1, -1):
        if(st[i] != " "):
            res+=st[i]
    return res

res=reverse("hello world")
print(res)