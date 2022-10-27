/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* i1 = head;
    struct ListNode* i2 = head;
    
    if(head == NULL) return NULL;
    
    else {
        while(i2 != NULL && i2->next != NULL) {
            
            i2 = i2->next->next;
            i1 = i1->next;
        }
        
        return i1;
    }
}
