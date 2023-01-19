# Carpet into Box
# There is a carpet of a size a*b [length * breadth]. You are given a box of size c*d. The task is, one has to fit the carpet in the box in a minimum number of moves. 
# In one move, you can either decrease the length or the breadth of the carpet by half (floor value of its half).
# Note: One can even turn the carpet by 90 degrees any number of times, wont be counted as a move.

class Solution:
    def carpetBox(self, A,B,C,D):
        box_area=C*D
        res=0
        carpet_area=A*B
        m=max(C,D)
        mn=min(C,D)
        temp1=max(A,B)
        temp2=min(A,B)
        while temp1>m or temp2>mn:
            
            if temp1 > m:
                A=temp1//2
                B=temp2
            else:
                A=temp1
                B=temp2//2
            res+=1
            temp1=max(A,B)
            temp2=min(A,B)
        return res

# Driver class
def main():
        T=int(input())
        while(T>0):
            A,B,C,D = map(int, input().split())
            
            obj = Solution()
            print(obj.carpetBox(A,B,C,D))
            
            T-=1


if __name__ == "__main__":
    main()