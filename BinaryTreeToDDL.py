'''Given a Binary Tree (BT), convert it to a Doubly Linked List(DLL) In-Place. The left and right pointers in
nodes are to be used as previous and next pointers respectively in converted DLL. The order of nodes in DLL
must be same as Inorder of the given Binary Tree. The first node of Inorder traversal (leftmost node in BT)
must be the head node of the DLL.
i/p:
1 3 2'''


class Solution:
    final=None
    temp=None
    def bToDLL(self,root):
        if root:
            self.bToDLL(root.left)
            if self.final==None:
                # forming node .....
                self.final=Node(root.data)
                self.temp=self.final
            else:
                curr=self.temp
                self.temp.right=Node(root.data)
                self.temp=self.temp.right
                self.temp.left=curr
            self.bToDLL(root.right)
        return self.final



from collections import deque
class Node:
    """ Class Node """
    def __init__(self, value):
        self.left = None
        self.data = value
        self.right = None


def buildTree(s):
    if(len(s)==0 or s[0]=="N"):           
        return None
        
    # Creating list of strings from input 
    # string after spliting by space
    ip=list(map(str,s.split()))
    
    # Create the root of the tree
    root=Node(int(ip[0]))                     
    size=0
    q=deque()
    
    # Push the root to the queue
    q.append(root)                            
    size=size+1 
    
    # Starting from the second element
    i=1                                       
    while(size>0 and i<len(ip)):
        # Get and remove the front of the queue
        currNode=q[0]
        q.popleft()
        size=size-1
        
        # Get the current node's value from the string
        currVal=ip[i]
        
        # If the left child is not null
        if(currVal!="N"):
            
            # Create the left child for the current node
            currNode.left=Node(int(currVal))
            
            # Push it to the queue
            q.append(currNode.left)
            size=size+1
        # For the right child
        i=i+1
        if(i>=len(ip)):
            break
        currVal=ip[i]
        
        # If the right child is not null
        if(currVal!="N"):
            
            # Create the right child for the current node
            currNode.right=Node(int(currVal))
            
            # Push it to the queue
            q.append(currNode.right)
            size=size+1
        i=i+1
    return root


import sys            
def printDLL(head): #Print util function to print Linked List
    prev = None
    sys.stdout.flush()
    while(head != None):
        print(head.data, end=" ")
        prev=head
        head=head.right
    print('')
    while(prev != None):
        print(prev.data, end=" ")
        prev=prev.left
    print('')
    
if __name__=='__main__':
    t=int(input())
    for _ in range(0,t):
        s=input()
        root=buildTree(s)
        ob = Solution()
        head = ob.bToDLL(root)
        printDLL(head)
# } Driver Code Ends