# def check(s):
#     cnt=0
#     for i in s:
#         print(i)
#         if i in s[cnt:]:
#             print(s[cnt:])
#             s=s.replace(i,"",1)
#         cnt+=1
#     return s
def check(s):
    li=list(s)
    res=""
    cnt=1
    for i in li:
        if i not in s[cnt:]:
            res+=i
        cnt+=1
    return res
t=int(input())
while t!=0:
    s=input()
    res=check(s)
    print(res)
    t-=1