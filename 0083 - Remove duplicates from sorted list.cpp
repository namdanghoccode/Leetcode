#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

ListNode *make_node(int x)
{
    ListNode *a = new ListNode();
    a->val = x;
    a->next = nullptr;
    return a;
}

void insert_last(ListNode *&head, int x)
{
    ListNode *newNode = make_node(x);
    if(head == nullptr){
        head = newNode;
    }
    else{
        ListNode *tmp = head;
        while(tmp->next != nullptr){
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
}

void input(ListNode *&head, int n)
{
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        insert_last(head, x);
    }
}

ListNode* deleteDuplicates(ListNode* head)
{
    ListNode *cur = head;
    while(cur != nullptr && cur->next != nullptr){
        if(cur->val == cur->next->val){
            cur->next = cur->next->next;
        }
        else{
            cur = cur->next;
        }
    }
    return head;
}

void output(ListNode *head)
{
    while(head != nullptr){
        cout << head->val << " ";
        head = head->next;
    }
}

int main()
{
    int n; cin >> n;
    ListNode *head = nullptr;
    input(head, n);
    head = deleteDuplicates(head);
    output(head);
}
