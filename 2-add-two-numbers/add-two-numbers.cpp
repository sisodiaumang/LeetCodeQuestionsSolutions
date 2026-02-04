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
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         long long num1=0,num2=0;
//         ListNode* temp=l1;
//         int i=0;
//         while(temp!=nullptr){
//             num1=num1+temp->val*pow(10, i);;
//             temp=temp->next;
//             i++;
//         }
//         temp=l2;
//         i=0;
//         while(temp!=nullptr){
//             num2=num2+temp->val*pow(10, i);
//             temp=temp->next;
//             i++;
//         }
//         num1=num1+num2;
//         ListNode* head=nullptr;
//         ListNode* tail=nullptr;
//         bool isFirstCycle=true;
//         while(num1!=0||isFirstCycle){
//             ListNode* newNode = new ListNode(num1%10);
//             if(head==nullptr){
//                 head=newNode;
//                 tail=newNode;
//             }
//             else{
//                 tail->next=newNode;
//                 tail=newNode;
//             }
//             num1/=10;
//             isFirstCycle=false;
//         }
//         return head;
        
//     }
// };


















class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int d1,d2,c=0;
        ListNode* head=nullptr; ListNode* tail=nullptr;
        while(l1!=nullptr||l2!=nullptr||c>0){
            if(l1!=nullptr){
                d1=l1->val;
            }
            else{
                d1=0;
            }
            if(l2!=nullptr){
                d2=l2->val;
            }
            else{
                d2=0;
            }
            
            d1+=d2+c;
            
            ListNode* newNode=new ListNode(d1%10);
            if(head==nullptr){
                head=newNode;
                tail=newNode;
            }
            else{
                tail->next=newNode;
                tail=newNode;
            }
            if(d1>=10){
                c=1;
            }else{
                c=0;
            }
            if(l1!=nullptr){
                l1=l1->next;
            }
            if(l2!=nullptr){
                l2=l2->next;
            }
            
        }
        return head;
    }
};