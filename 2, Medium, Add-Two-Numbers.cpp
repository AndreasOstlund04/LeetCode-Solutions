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

        int carry = 0;

        ListNode* result = new ListNode(0);

        while(l1 || l2){

            int first = l1->val;
            int second = l2->val;

            int sum = first + second;
            
            if(sum >= 10){
                
                sum = sum + carry;

                carry = sum / 10;
            }else{

                sum = sum + carry;                
            }

            l1 = l1->next;
            l2 = l2->next;

            result->val = sum;
            result->next;

        }
    return result->next;
    }
};