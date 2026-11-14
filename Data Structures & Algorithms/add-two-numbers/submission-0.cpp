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
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        int carry = 0;

        while(l1 != NULL || l2 != NULL || carry) {
            int x,y;
            if(l1 != NULL) {
                x = l1->val;
            }
            else {
                x = 0;
            }
            if(l2 != NULL) {
                y = l2->val;
            }
            else {
                y = 0;
            }
            int sum = x+y+carry;
            carry = sum/10;
            int remainder = sum%10;
            temp->next = new ListNode(remainder);
            temp = temp->next;

            if(l1 != NULL) {
                l1 = l1->next;
            }
            if(l2 != NULL) {
                l2 = l2->next;
            }
        }

        ListNode* ans = dummy->next;
        delete dummy;
        return ans;
    }
};
