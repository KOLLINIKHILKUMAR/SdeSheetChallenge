# Definition for singly-linked list.
# class ListNode:
#     def _init_(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        s1=0
        s2=0
        s3=0
        e1=1
        e2=1
        while(l1!=None):
            s1+=l1.val*(10**(e1-1))
            l1=l1.next
            e1+=1
        print(s1)    
        while(l2!=None):
            s2+=l2.val*(10**(e2-1))
            l2=l2.next
            e2+=1
        print(s2)    
        t=s3=s1+s2
        print(t)
        i=0
        n=ListNode()
        while(s3!=0):
            r=s3%10
            if i==0:
                n=h=ListNode()
                h.val=r
                h.next=None
                i=1
            else:
                o=ListNode()
                n.next=o
                n=o
                o.val=r
                o.next=None
            s3=s3//10    
        if t==0:
            o=ListNode()
            return o
        else:
            return h
