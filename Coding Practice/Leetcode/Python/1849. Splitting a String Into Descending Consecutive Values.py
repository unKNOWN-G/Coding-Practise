class Solution:
    def splitString(self, s: str) -> bool:
        def solve(s,prev,start,end,split):
            if(start==len(s) and split>=2):
                return True
            while(end<=len(s)):
                p  = int(s[start:end])
                end+=1
                if(p!=prev-1 and prev!=-1):
                    continue
                if(solve(s,p,end-1,end,split+1)):
                    return True
            return False
        return solve(s,-1,0,1,0)
                    