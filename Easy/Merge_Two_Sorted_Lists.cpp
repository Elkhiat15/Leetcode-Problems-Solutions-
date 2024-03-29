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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
// similar to merge function in mergeSort | if one list ends make the pointer points at next of the other list
        ListNode* res = new ListNode();

        ListNode* ans = res;

        while(list1 && list2){
            if(list1->val < list2->val){
                ans->next = list1;
                list1 = list1->next;
            }
            else{
                ans->next = list2;
                list2 = list2->next;
            }
            ans = ans->next;
        }
        
        if(list1)
            ans->next = list1;
        
        else
            ans->next = list2;
        
        
    return res->next;
    }
};