# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        new=ListNode()
        head=new
        while(l1!=None and l2!=None):
            value = l1.val
            if(l1.val<l2.val):
                l1=l1.next
            else:
                value=l2.val
                l2=l2.next
            ring=ListNode(value)
            new.next=ring
            new=new.next
        while(l1!=None):
            ring=ListNode(l1.val)
            new.next=ring
            new=new.next
            l1=l1.next
        while(l2!=None):
            ring=ListNode(l2.val)
            new.next=ring
            new=new.next
            l2=l2.next
        
        return head.next
        
#####################    Alternate Approach       ########################### 


class Solution:
    def mergeTwoLists(self, a: ListNode, b: ListNode) -> ListNode:
        if a and b:
            if a.val>b.val:
                a,b=b,a
            a.next = self.mergeTwoLists(a.next,b)
        return a or b
        