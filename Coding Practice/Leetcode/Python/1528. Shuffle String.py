class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        new_list = [None]*len(s)
        for i in range(len(indices)):
            new_list[indices[i]]=s[i]
        return ''.join(new_list)