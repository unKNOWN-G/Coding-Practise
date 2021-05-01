# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def sortList(self, head: ListNode) -> ListNode:
        nums=[]
        while(head!=None):
            nums.append(head.val)
            head=head.next
        print(nums)
        nums.sort()
        print(nums)
        if(len(nums)>0):
            ping = ListNode(nums[0])
            ling=ping
            for i in range(1,len(nums)):
                ring = ListNode(nums[i])
                ping.next = ring
                ping  =ping.next
            return ling
        else:
            return head