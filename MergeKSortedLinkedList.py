# Given K sorted linked lists of different sizes. The task is to merge them in such a way that after merging
# they will be a single sorted linked list.
class Solution:
    #Function to merge K sorted linked list.
    def mergeKLists(self,arr,K):
        li = []
        for i in arr:
            temp = i
            while temp:
                li.append(temp.data)
                temp = temp.next
        li.sort()
        ll = LinkedList()
        for i in li:
            ll.add(i)
            
        return ll.head
    

class Node:
    def __init__(self,x):
        self.data=x
        self.next=None

class LinkedList:
    def __init__(self):
        self.head=None
        self.tail=None
    
    def add(self,x):
        if self.head is None:
            self.head=Node(x)
            self.tail=self.head
        else:
            self.tail.next=Node(x)
            self.tail=self.tail.next
    
def printList(head):
    walk = head
    while walk:
        print(walk.data, end=' ')
        walk=walk.next
    print()

if __name__=="__main__":
    for _ in range(int(input())):
        n=int(input())
        line=[int(x) for x in input().strip().split()]
        
        heads=[]
        index=0
        
        for i in range(n):
            size=line[index]
            index+=1
            
            newList = LinkedList()
            
            for _ in range(size):
                newList.add(line[index])
                index+=1
            
            heads.append(newList.head)
        
        merged_list = Solution().mergeKLists(heads,n)
        printList(merged_list)

# } Driver Code Ends