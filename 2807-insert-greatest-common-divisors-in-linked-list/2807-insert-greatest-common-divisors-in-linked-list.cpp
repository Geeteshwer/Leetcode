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
int gcd(int a,int b){
    return b==0 ? a:gcd(b,a%b);
}
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while(temp && temp->next){
            int ans = gcd(temp->val,temp->next->val);
            ListNode* new1 = new ListNode(ans,temp->next);
            temp->next = new1;
            temp = new1->next;
        }
        return head;
    }
};