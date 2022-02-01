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
    ListNode* reverseList(ListNode* head) {
        
        //iterative approach
        /*
        ListNode* previous=NULL;
        // dummy node
         ListNode* next;
        while(head!=NULL){
            next=head->next;
            head->next=previous;
            previous=head;
            head=next;
            
        }
        return previous;
        
        */
        
        //recursive approach
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* newhead=reverseList(head->next);
        ListNode* headNext=head->next;
        headNext->next=head;
        head->next=NULL;
        return newhead;
        
    }
};