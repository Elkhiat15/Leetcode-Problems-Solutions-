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
    //normal addition -> then if one LL end complete adding remainder with the othe-> finally if there is remainder add it to answer
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* l3 = l2;
        ListNode* prev = l2;

        int rem=0, sum=0;
        
        while(l1 && l2){
            sum = (l1->val + l2->val +rem);
            l2->val = sum % 10;
            rem = (l1->val + l2->val +rem) / 10;
    
            prev=l2;
            l1=l1->next;
            l2=l2->next;
        }
        
        l2 =prev;
        
        while(l1){
        
            l2->next = new ListNode(0);
            l2->next->val = (l1->val + l2->next->val +rem) % 10;
            rem =(l1->val + l2->next->val +rem)/10;
    
            prev =l2->next;
            l1=l1->next;
            l2= l2->next;
        }
        
        
       while( l2->next){
            prev=l2->next;
            l2= l2->next;
            l2->val = (l2->val +rem) % 10;
            rem =(l2->val +rem)/10;
    
        
    }
        
        if(rem==1){
            l2 = prev;
            l2->next = new ListNode(1);
            
        }
        
        return l3;
        
    }
};