# # for i in range(n + 2):
# # phi.append(0)

# def comput(n):
#     phi=[]
#     # for i in range(n+2):
#     #     phi.append(0)
#     for i in range(n+2):
#         phi.append(i)
#     for p in range(2,n+1):
#         if phi[p]==p:
#             phi[p]=p-1
#             for i in range(2*p,n+1,p):
#                 phi[i]=(phi[i]//p)*(p-1)
#     for i in range(1,n+1):
#         print("TOtiennt of",i,"is",phi[i])

# n=12
# comput(n)


# def check(n):
#     return check(n-1) & check(n)
# n=int(input())
# res=check(n)
# print(res)


def fun(x):
     
    if(x > 0):
        x -= 1
        fun(x)
        print(x , end=" ")
        x -= 1
        fun(x)
         
# Driver code
a = 4
fun(a)