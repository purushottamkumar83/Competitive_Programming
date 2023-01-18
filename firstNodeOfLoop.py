# Find the first node of loop in linked list
# Given a singly linked list of N nodes. Find the first node of the loop if the linked list has a loop. If a loop is present return the node data of the first node of the loop else return -1.

class Solution:
    #Function to find first node if the linked list has a loop.
    def findFirstNode(self, head):
        d = {}
        res = -1
        while head:
            if head in d:
                if d[head] == 'v':
                    res = head.data
                    return res
            else:
                d[head] = 'v'
            head = head.next
        return res

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self) -> None:
        self.head = None
        self.tail = None

    def insert(self, val):
        if self.head is None:
            self.head = Node(val)
            self.tail = self.head
        else:
            self.tail.next = Node(val)
            self.tail = self.tail.next
    
    def loopHere(self, pos):
        if pos == 0:
            return 
        walk = self.head
        for i in range(1,pos):
            walk=walk.next
        self.tail.next=walk

if __name__ == '__main__':
    for j in range(int(input())):
        n=int(input())
    
        LL=LinkedList()
        for i in input().split():
            LL.insert(int(i))
        
        LL.loopHere(int(input()))

        print(Solution().findFirstNode(LL.head))