'''Write a program to Validate an IPv4 Address.
According to Wikipedia, IPv4 addresses are canonically represented in dot-decimal notation, which consists of
four decimal numbers, each ranging from 0 to 255, separated by dots, e.g., 172.16.254.1 .
A valid IPv4 Address is of the form x1.x2.x3.x4 where 0 <= (x1, x2, x3, x4) <= 255.
Thus, we can write the generalized form of an IPv4 address as (0-255).(0-255).(0-255).(0-255).
Note: Here we are considering numbers only from 0 to 255 and any additional leading zeroes will be considered
invalid.
i/p:
x.y.x.w'''

def isValid(s):
    l = s.split(".")
    count = 0
    if len(l) is 4:
        for i in l:
            if i is "":
                return 0
                
            elif len(i) > 1 and i[0] == '0':
                return 0
                
            try:
                num = int(i)
            except:
                return 0
            else:
                if num in range(0, 256):
                    count += 1
                    if count is 4:
                        return 1
                    continue
                else:
                    return 0
    else:
        return 0





    
if __name__=="__main__":
    t=int(input())
    for _ in range(0,t):
        s=input()
        if(isValid(s)):
            print(1)
        else:
            print(0)
    

