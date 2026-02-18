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
void insertAtEnd(ListNode*& head, int val) {
    ListNode* newNode = new ListNode(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    ListNode* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // attach new node
    temp->next = newNode;
}

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head1=list1;
        ListNode* head2=list2;
        ListNode* headans=nullptr;
        while (list1 != nullptr && list2 != nullptr){
            if(list1->val<list2->val){
                insertAtEnd(headans,list1->val);
                list1=list1->next;
            }
            else{
                insertAtEnd(headans,list2->val);
                list2=list2->next;
            }
        }
        while(list1!=nullptr){
            insertAtEnd(headans,list1->val);
            list1=list1->next;
        }
        while(list2!=nullptr){
            insertAtEnd(headans,list2->val);
            list2=list2->next;
        }
        return headans;
    }
};