def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        if l1 and l2:
            t1, t2 = l1, l2
            l3 = ListNode()
            t3 = l3
            carry = 0
            
            while t1 or t2 or carry:
                s = carry
                
                if t1:
                    s += t1.val
                    t1 = t1.next
                
                if t2:
                    s += t2.val
                    t2 = t2.next
                
                carry = s // 10
                t3.val = s % 10
                if t1 or t2 or carry:
                    t3.next = ListNode()
                
                t3 = t3.next
            
            return l3
        else:
            return None
