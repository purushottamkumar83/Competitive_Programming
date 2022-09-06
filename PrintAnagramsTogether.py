'''Given an array of strings, return all groups of strings that are anagrams. The groups must be created in 
order of their appearance in the original array. Look at the sample case for clarification.
Note: The final output will be in lexicographic order.'''

class Solution:
    def Anagrams(self, words, n):
        '''
        words: list of word
        n:      no of words
        return : list of group of anagram {list will be sorted in driver code (not word in grp)}
        '''
        
        
        maps={}
        res=[]
        for i in words:
           j=sorted(i)
           o=''.join(j)
           if o in maps.keys():
               maps[o]+='0'+i
           else:
               maps[o]=i
        
        for i in maps.values():
           res.append(i.split('0'))
        
        return res



if __name__ =='__main__':
    t= int(input())
    for tcs in range(t):
        n= int(input())
        words=input().split()
        
        ob = Solution()
        ans = ob.Anagrams(words,n)
        
        for grp in sorted(ans):
            for word in grp:
                print(word,end=' ')
            print()

# } Driver Code Ends