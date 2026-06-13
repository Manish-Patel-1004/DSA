/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp = headA;
        int count = 0, x, y;
        while(temp != nullptr){
            count++;
            temp = temp->next;
        }
        x = count;
        temp = headB;
        count = 0;
        while(temp != nullptr){
            count++;
            temp = temp->next;
        }
        y = count;
        ListNode *A = headA, *B = headB;
        if(x < y){
            for(int i = 0; i < y-x; i++){
                B = B -> next;
            }
        }
        else{
            for(int i = 0; i < x-y; i++){
                A = A -> next;
            }
        }
        while(A && B){
            if(A == B) return A;
            A = A->next;
            B = B->next;
        }
        return nullptr;
    }
};