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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* st=head;
        while(st!=NULL){
            size++;
            st=st->next;
            
        }

         if (size == n) {
            return head->next;
        }
        st=head;

        int count=1;
        if(head->next == NULL&&n==1){
            return NULL;
        }
        else if(n==1){
            while(st->next->next != NULL){
                st=st->next;
            }
            st->next=NULL;
        }

        else{
            int target = size-n;
            while(count!=target){
                st=st->next;
                count++;
            }
            st->next = st->next->next;
        }
        return head;
    }
};
