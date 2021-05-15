"""
1) Split the Sentence into Words
2) Intialize a Dictionery and using the last letter in each word(num value) add elements into dictionery
3) Join All elements in dictionery from 1 to n in order
"""

class Solution(object):
    def sortSentence(self, s):
        a= s.split(" ")
        ans = ""
        b= {'0':""}
        for i in range(len(a)):
            b[a[i][-1]] = a[i]
        for i in range(1,len(a)+1):
            print(b[str(i)])
            ans+=b[str(i)][:-1]
            ans+=" "
        return ans[:-1]