/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 && l2){
            ListNode *t1, *t2, *t3, *l3;
            t1 = l1; t2 = l2;
            l3 = new ListNode();
            t3 = l3;
            int s = 0, carry = 0;
        

            while(t1 || t2 || carry){
                s = carry;

                if(t1){
                    s += t1->val;
                    t1=t1->next;
                }

                if(t2){
                    s += t2->val;
                    t2=t2->next;
                }
                
                carry = s / 10;
                t3->val = s % 10;
                if(t1 || t2 || carry)
                    t3->next = new ListNode();

                t3 = t3->next; 
            }

            return l3;
        }
        else
            return nullptr;
    }
};
