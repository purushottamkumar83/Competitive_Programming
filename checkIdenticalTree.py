#Determine if Two Trees are Identical
# Given two binary trees, the task is to find if both of them are identical or not. 

class Node:
    def _init_(self, val):
        self.right = None
        self.data = val
        self.left = None

class Solution:
    #Function to check if two trees are identical.
    def preOrder(self, root):
        li=[]
        if root is not None:
            li.append(root.data)
            li+=self.preOrder(root.left)
            li+=self.preOrder(root.right)
        return li
    def isIdentical(self,root1, root2):
        pre1=self.preOrder(root1)
        pre2=self.preOrder(root2)
        if pre1==pre2:
            return True
        return False
                
