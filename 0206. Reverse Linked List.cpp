#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
};

ListNode* make_node(int x){
    ListNode* a = new ListNode();
    a->val = x;
    a->next = nullptr;
    return a;
}

ListNode* buildList(vector<int> head){
    if(head.empty()) return nullptr;

    ListNode* root = make_node(head[0]);
    ListNode* cur = root;

    for(int i = 1; i < head.size(); i++){
        cur->next = make_node(head[i]);
        cur = cur->next;
    }

    return root;
} 

class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            ListNode* prev = nullptr;
            ListNode* cur = head;

            while(cur != nullptr){
                ListNode * Next = cur->next;
                cur->next = prev;
                prev = cur;
                cur = Next;
            }

            return prev;
        }
};

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << "\n";
}

int main(){
    int n; cin >> n;
    vector<int> head(n);
    for(int i = 0; i < n; i++) cin >> head[i];

    Solution sol;
    ListNode* root = buildList(head);
    ListNode* reversed = sol.reverseList(root);
    printList(reversed);

    system("pause");
}