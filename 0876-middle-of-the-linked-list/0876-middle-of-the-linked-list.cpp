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
    ListNode* middleNode(ListNode* head) {
        int cnt=0;
        ListNode*temp=head;
        while(temp!=nullptr){
            cnt++;
            temp=temp->next;
        }
        cnt/=2;
        temp=head;
        while(cnt--){
            temp=temp->next;
        }
        head=temp;
        return head;
    }
};